def display_colors(matrix):
    color_mapping = {'b': 'Blue', 'y': 'Yellow', 'w': 'White'}

    for row in matrix:
        for symbol in row:
            color = color_mapping.get(symbol, 'Unknown')
            print(f'{color:<8}', end=' ')
        print()

matrix = [
    ['b', 'y', 'w'],
    ['y', 'b', 'w'],
    ['w', 'y', 'b']
]

display_colors(matrix)
