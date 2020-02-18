# PROS V5 Template
Tualatin high school official vex robotics code for tower takeover (2019-2020)
Download it here for PROS: 
[PROS DOWNLOAD](https://github.com/IrvingtonRobotics/pros-v5-template).

Fully suited with autonomous, op-control, and advanced driver features
1. follow along with the TODO directions by searching for `%TODO` and
making edits (In Atom, press <kbd>ctrl</kbd> + <kbd>shift</kbd> +
<kbd>F</kbd> to search in project).

2. Download [firmware/okapilib.a](https://github.com/IrvingtonRobotics/pros-v5-template/raw/master/firmware/okapilib.a)
from the template repository, then copy the file into your new repository.
For some reason, this is necessary because the template leaves out this one
file.

Most of your work will be in the `src/` directory, but you may want to
edit `include/main.h` to include libraries such as Okapi or edit
`Makefile` to enable hot/cold linking for wireless upload.

----------------------------------------------------------------------

%TODO: Delete everything above this line ^ %

%TODO: Rename title%
# VEX Tower Takeover Code
%TODO: Change team letter%
**Team 44730A Bluescreens**

## Controls

### Primary Controller
| Position | Description |
|----------|-------------|
| Left Y | Left drive control |
| Right Y | Right drive control |

## Wiring

### Motors
| Motor Port | Function |
|------------|----------|
| 1 | Left drive motor |
| 10 | Right drive motor |
