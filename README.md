# MySokoban Epitech Project 2021
A terminal-based implementation of the classic warehouse puzzle game Sokoban, developed in C as a first year student.

---

## 🎯 Project Overview

**MySokoban** is a command line version of Sokoban where the player pushes boxes to storage locations inside a warehouse layout. The aim is to push all boxes (‘X’) onto designated target spots (‘O’) without being stuck.

The game uses the **ncurses** library to render the game in the the terminal, handling inputs, drawing the map, and responding to user controls.

Language: C
Library: ncurses and standard C / system calls.

---

## 🚀 Features

* Fully playable in the **terminal** using ncurses.
* Movement via arrow keys.
* Restart ability (e.g. via space bar or dedicated key).
* Supports custom map files with walls, floor, storage, boxes, and player position.
* Supports map validation and error handling for invalid maps or unsolvable conditions.
* Detects win condition (all boxes on storage) or loss (no more valid moves).
* Handles terminal resizing or prompts when the terminal is too small to display the the map properly.

---

## 🗺️ Map Format

Each map (text file stored in the config folder) describes the layout, with characters meaning:

| Character | Meaning              |
| --------- | -------------------- |
| `#`       | Wall                 |
| `P`       | Player               |
| `X`       | Box                  |
| `O`       | Storage location     |
| (space)   | Empty floor          |
| `\n`      | New line (row break) |

### Example:

```
############
#     O    #
#  P  #### #
#          #
#######  # #
#   O  ##  #
#   ##     #
#       XX #
#   #      #
############
```

---

## 🧰 Usage Instructions

### Compile

At the root of the repo:

```bash
make
```

### Run the game

```bash
./my_sokoban path/to/map.txt
```

### Show help / usage

```bash
./my_sokoban -h
```

**Expected usage message:**

```
USAGE
    ./my_sokoban map

DESCRIPTION
    map file representing the warehouse map, containing ‘#’ for walls,
    ‘P’ for the player, ‘X’ for boxes and ‘O’ for storage locations.
```

---

## ✅ Exit Codes

| Exit code | Meaning                                                         |
| --------- | --------------------------------------------------------------- |
| `0`       | Game won (all boxes on storage)                                 |
| `1`       | Loss — no more valid moves                                      |
| `84`      | Error — invalid map or other errors (map parsing, memory, etc.) |

---

## 🧩 Project Structure (example)

```
MySokoban_Epitech_Project_2021/
├── sources/         # C source files
├── lib/             # my personal C library functions 
├── include/         # Header files
├── config/          # Map files
├── Makefile         # build definitions
├── tests            # tests folder
└── README.md        # this file
```

---

## 💡 Bonus / Extensions Ideas

Some enhancements you can consider or maybe already implemented:

* Add a **menu / UI** before starting game (level selection, move counter).
* Track **scores or best moves** per map.
* Add **timer** or limited moves.
* Provide a **map editor / loader** to create or modify levels.
* Implement an **AI / solver** to solve maps automatically.
* Add animations or visual improvements in terminal (colors, tile effects).

---

## 🧪 Testing & Validation

* Validate maps on startup: check correct character counts (one player `P`, equal or correct number of boxes vs storages).
* Check for bounding walls or shape consistency.
* Ensure that moves are valid (no pushing into wall or pushing more than one box).

