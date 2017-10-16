from random import choice

choices = ['gawi', 'bawi', 'bo']

def show_me_the_hand(records):
    return choice(choices[:2])

print(show_me_the_hand)
