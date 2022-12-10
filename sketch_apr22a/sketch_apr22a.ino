import discord
from discord.ext import commands

from discord_components import DiscordComponents, Button, ButtonStyle
from pyfirmata import Arduino, util
import config

bot = commands.Bot( command_prefix = '=', intents = discord.Intents.all())


board = Arduino('/dev/ttyUSB0')
pin = board.get_pin('d:3:p')

@bot.event
async def on_ready():
    DiscordComponents(bot)
    print( 'Bot connected')

@bot.command()
async def pins(ctx):
    await ctx.send(
        embed = discord.Embed(title = "Все пины"),
        components = [[Button(style=ButtonStyle.green, label="pin 3 on"), Button(style=ButtonStyle.red, label="pin 3 off")]]
        )

    response = await bot.wait_for("button_click")
    if response.channel == ctx.channel:
        if response.component.label == "pin 3 on":
            await response.respond(content="Пин включен!")
            pin.write(1)
        if response.component.label == "pin 3 off":
            await response.respond(content="Пин выключен!")
            pin.write(0)

bot.run(config.token)
