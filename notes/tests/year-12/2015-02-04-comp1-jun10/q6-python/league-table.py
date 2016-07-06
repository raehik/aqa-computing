#!/usr/bin/env python3
#
# much fun
#

player1_score = 0
player2_score = 0

num_games = int(input("How many games? "))

for i in range(num_games):
    player1_won = input("Did Player One win the game (enter Y or N)? ")

    if player1_won == "Y":
        player1_score += 1
    else:
        player2_score += 1

print(player1_score)
print(player2_score)
