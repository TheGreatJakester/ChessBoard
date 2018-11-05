import re
#read the file in
PGN_FILE = open("./kasparov_topalov_1999.pgn","r")
PGN_CONTENTS = PGN_FILE.read().replace(r"\n"," ")
#parse out each move
TURN_PATTERN = re.compile(r'\d{1,2}[.] .+? .+? ')
MOVES = TURN_PATTERN.finditer(PGN_CONTENTS)
MOVES = [move.group(0) for move in MOVES]
MOVES = [(move.split()[1],move.split()[2],) for move in MOVES]

#parse each move
