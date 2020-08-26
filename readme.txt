TankGame - by Phroton
A simple cmd-based classic shooting game

System Requirements:
Windows 8.1/Windows 10
x64-bit (v0.1.0.39+) x86 (v0.1.0.38-)
Command prompt. Color 'C' must be Red: 255 and classic cmd window size

Plans:
-Add colors to tanks, and choose your own color
-2 other game modes
-Improve Performance
-Separate statistics file from config file
'=Load a config file
'-Make tanks disappear for a second once shoot
-Open readme.txt and config file using the game
-Remove goto statements
-Fix bugs
!=Add amplifier picker on classic mode
'=Add custom difficulty for classic mode
(!=High Priority, '-Medium Priority, -Low Priority)

Note: Custom mode has been scrapped on 0.3.0 and will be released on version 0.4.0 due to slow development of 0.3.0

v0.4.0.0 Alpha build - August , 2020
-Can now customize block results value (block 1-4 value 1-7)
-Re-enabled custom mode in classic game
-Value is now shown on custom results menu (block 1)
-Fixed bug 7th value not displaying on custom results

Older Versions:
v0.0.0 - May 17, 2020
-Added Project file
v0.1.0.0 Alpha build 6 - May 17, 2020
-Added classes, voids
-Main menu
v0.1.0.1 Alpha build 9 - May 17, 2020
-Added Difficulties, no function yet.
-Added function to settings
-Added info page
-Internally called "0.1.0.0" due to an error
v0.1.0.2 Alpha build 25 - May 18, 2020
-Added screen clearing
-Added Game screen input
-Added function to Easy Difficulty
-Added tank. Letter 'M'
-Added unused controls
-Added gameOver function
-Added 'd' to move LEFT
v0.1.0.3 Alpha build 38 - May 19, 2020
-Added 'a' to move RIGHT
-Added unused UP direction (Used for shooting)
-Added score and health point. No functionality yet.
-LEFT and RIGHT controls will now limit to borders
-Added shootPlayer integers
-Added library 'algorithm', 'chrono', 'strstream', 'thread'
v0.1.0.4 Alpha build 47 - May 20, 2020
-Added more info on Info Page (C++, Dev, STDC)
-Added PlayerName, and settings
-Added unused highscore integer
-Added unused enemyTank character
-Will now clear screen properly when navigating pages
-Added unused code for enemyTank movement
v0.1.0.5 Alpha build 65 - May 20, 2020
-Removed unused function for enemyMovement
-Added unused thread function for timing
-Added unused code for X and Y randomizing
-Added enemyMovement with width pre-processor definition
-Changed lowercase controls to uppercase controls such as 'a', 'd' to 'A', 'D'
v0.1.0.6 Alpha build 66 - May 21-22, 2020
-Added ammunition number
-Ammunition is now used when pressing 'W'
v0.1.0.7 Alpha build 77- May 22, 2020
-Ammunitions will now stay 0 when empty, rather than using negative numbers
-Added unused variable shootPlayerPtr2
-Shooting range is now higher
-Renamed 'EASY, NORMAL, HARD, CHAOS' to 'SHOOTING, INVASION, CLASSIC, CHAOS'
-Changed Difficulty selection to Game modes
-Changed enemyTank randomizer
v0.1.0.8 Alpha build 86 - May 22, 2020
-Removed randomizer to fix insane bug
-Added 'S' to shield tank. 'W' to unshield.
-Tank will no longer move left and right once shield is enabled
-Added unused width precision code 'fill'
-Removed unused width precision code 'width'
v0.1.0.9 Alpha build 98 - May 23, 2020
-Added build date and time in info page
-Added unused additional scores for shooting enemy
-Changes to randomizer
-Added unused additional ammunition for shooting enemy
v0.1.0.10 Alpha build 113 - May 23, 2020
-Added message below Game Over text
-Added debug mode
-Added 'D' in main menu
-Pressing 'D' 10 times will now activate debug mode
-Added debug menu settings on settings page
-Can now exit back to main menu on settings page
v0.1.0.11 Alpha build 121/133 - May 24, 2020
-Added Example text in Debug mode menu (build 121)
-Fixed bug causing inability to disable debug mode (build 121)
-Can now navigate to main menu while on game mode page (build 121)
-Changed inputs 0=Back, 1=Shooting instead of 0=Shooting, 4-Back (build 121)
-Added "Display Text" on debug menu (build 121)
-Error message when incompatible debug options are found (build 121)
-Added respawn option in game over screen (build 133)
-Fixed bug causing inability to respawn after losing the game. (build 133)
-Added unused code to display name on top of GUI (build 133)
-Added switch indicator on debug menu (build 133)
v0.1.0.12 Alpha build 147- May 25, 2020
-Added 15 unused colors to the game
-Set the default game color to white
-Replaced original code to set player names
-Removed code to display version number on debugging during the gameplay
-Will now display the player name on the top of the screen during the gameplay
-Name will not display once the name is set to "PLAYER" (All caps)
v0.1.0.13 Alpha build 179 - May 25, 2020
-Added unused color selector on player properties
-Added unused code for changing tank colors
-Added broken scoring system. Can cause crashes
-Changed health mechanics. Health will now decrease by 5 instead of 1.
v0.1.0.14 Alpha build 200 - May 26, 2020
-Will now give score once the enemy tank has shoot
-Will now give ammunition once the enemy tank has shoot
-Buffed ammunition reward to 5 rather than 10
-Nerfed score reward from 1, 10 to 100 scores.
-Program title is now displayed. "TankGame"
-Added Highscore mechanics. Only displays at Game Over screen
-Debug screen will now clear screens properly
-Added video settings
-Added themes under video settings
v0.1.0.15 Alpha build 218/233- May 26, 2020
-Themes in video settings will now display switch indicator (build 218)
-Themes in video settings are now working correctly (build 218)
-Themes will now work in gameplay (build 218)
-Re-added difficulties (build 218)
-Ammunition and score reward will now depend on the difficulty (build 218)
-Added additional variables in debug mode A (build 233)
-Changed enemy movement for experimental purposes (build 233)
-Added unused code for multithreading (build 233)
-Added unused libraries related to multithreading (cstdlib, pthread) (build 233)
v0.1.0.16 Alpha build 255 - May 26, 2020
-Changes to enemy movement mechanics
-Changed variables to test enemy movement
-Fixed visual text errors
-Fixed bug causing the inability to navigate back while on game mode menu
-Highscores will now show on game mode menu
v0.1.0.17 Alpha build 274 - May 27, 2020
-Changes to enemy movement randomizer
-Enemy Tank is now moving correctly rather than the previous randomizer
-Scoring is now working properly
-Fixed bug causing screen stays red after exiting the game over screen
-Added statistics page
-Added death count
-Added "COMING SOON" text to other game modes
-Fixed spacing and margin on game over screen
v0.1.0.18 Alpha build 296 - May 27, 2020
-Version numbers are now using Pre-Processor Definitions
-Debug text is now displaying build number
-Added unused variables for enemy shooting
-Added mechanics for enemy shooting. Under experimental gameplay
-Added Experimental Features settings
v0.1.0.19 Alpha build 309 - May 27, 2020
-Changes to the enemy shooting mechanics
-Features under experimental gameplay are now displayed as text
-Fixed misaligned layout of experimental gameplay
-Tank color settings is now under experimental gameplay
-Debug mode can no longer be used without enabling debugging mode ('D' = 10 times)
-More text on Debug mode B
-Some code relating enemy shooting is now under experimental gameplay
-Experimental Gameplay, Enemy tank will now disappear when shoot. Currently available at easy difficulty
-Every text is now all-capitalized
v0.1.0.20 Alpha build 322 - May 28, 2020
-Added unused code for window
-Added unused code for dialog boxed
-Changes to the enemy shooting mechanics
-[EXP] Tank will no longer shoot indefinitely after going to x position 31+
-Added an option to display highscore on top of screen
v0.1.0.21 Alpha build 333 - May 28, 2020
-Changes to enemy shooting mechanics
-Fixed Alignment errors in game over screen
-Fixed Newline errors in Difficulty screen
-Scores will now display on main menu after the game over screen
-Added recent scores on statistics page
v0.1.0.22 Alpha build 343 - May 29, 2020
-Fixed bug causing 2 lines are printed when displaying name and highscore on top of UI
-Navigating back on Video settings has been replaced by 'X' instead of '0'
-Fixed bug that highscore will not display even if it's enabled
-Added example text in video settings
-Renamed 'UI' to 'GUI SETTINGS' in video settings
-Removed extra line in gameplay UI
-Game Over text is now red
-Changes to Enemy Shooting mechanics
v0.1.0.23 Alpha build 350 - May 29, 2020
-Changes to enemy shooting mechanics
-Added more debug variables
-Added debug mode C
-Added more variables in debug mode A
-Changes to enemy tank destroy visual
v0.1.0.24 Alpha build 361 - May 30, 2020
-Fixed bug that score will not remain 0 when exiting from game over screen
-Fixed bug that tank will not return back to the spawnpoint instead, to the previous movement
-Buffed ammunition rewards. Easy = 10 (Prev.7), Normal = 7 (5), Hard = 5 (3), Expert = 3 (1)
-Controls will no longer require pressing 'ENTER'
-Enemy tank now moves continiously
v0.1.0.25 Alpha build 374 - May 31, 2020
-Changes to enemy tank death visual
-Quitting the game will now quit properly
-Added "Minimal" game mode. No use yet
-Added "Minimal" scores in statistic page
-Added "Shooted Ammo" in statistic page
-Changes to enemy shooting mechanics
-Added shootingTimes variable in debug mode C
v0.1.0.26 Alpha build 392 - June 1, 2020
-Changes to Enemy shooting mechanics
-Added more info on statistics. Controls D, A and S
-Added more variables on debug mode. Variables for statistics D, A and S
-Fixed text visual errors on debug mode
-Main menu no longe requires pressing 'ENTER' to navigate
-Info page now requires pressing 'X' to navigate back to menu
-Fixed spacing errors in info page
-Every text is now ALL CAPS except version text
-Game title is now displayed before the main menu (works as loading text)
-Temporarily removed exit function due to an error
v0.1.0.27 Alpha build 407 - June 1, 2020
-Settings page no longer requires pressing 'ENTER'
-Statistics page no longer requires pressing 'ENTER'
-Added statistics clearing function
-Game selection no longer requires pressing 'ENTER'
-Difficulty selection in gamemode 1 no longer requires pressing 'ENTER'
v0.1.0.28 Alpha build 430 - June 2, 2020
-Added Loading bar
-Experimental Settings Page no longer requires pressing 'ENTER'
-Recent scores now has a delay of 3 seconds
-Toggles in Experimental gameplay now has 1 second of delay
-Changes to enemy shooting mechanics
v0.1.0.29 Alpha build 448 - June 2, 2020
-Changes to enemy shooting mechanics
-Tank will no longer shield in Expert Difficulty
-Controls now require ARROW controls instead of WASD controls
-Tank no longer starts at x=0. It's now at x=30
-Highscores and Debug text will no longer conflict and cause 2 lines printed
-Player screen will no longer navigate back to main menu
v0.1.0.30 Alpha build 465 - June 3, 2020
-Added controller settings
-You can now switch between controls 'WASD' and Arrow Controls
-Changes to enemy shooting mechanics
-Enemy shooting now displays ',', but for experimental purposes only.
v0.1.0.31 Alpha build 479 - June 3, 2020
-Changes to enemy shooting mechanics
-Changes to enemy shooting variable type
-Some enemy shooting variable now uses NULL values
-Added unused function to enemy shooting movement for x<=30
-Highscore will now always update during the gameplay
-WASD controls is now the default controls
v0.1.0.32 Alpha build 500 - June 4, 2020
-Changes to enemy shooting mechanics
-Enemy Shoot now follows it's enemy tank direction, but with unfixed bugs.
-Enemy Shoot now displays "," but with bugs
-Removed unused codes
-Removed codes that has no effects to the program
-Added help page
-Added changelog page
v0.1.0.33 Alpha build 536 - June 5, 2020
-Added code for config file
-Added libraries relatating to files
-Help page: Added info about Caps lock
-Tweaks to quit option
-Changes to Enemy shooting mechanics
-Added the ability to buy health for 500 scores. +5 Health. Press Q to enable menu
-More info on help page. (About Q and X control)
v0.1.0.34 Alpha build 579 - June 6, 2020
-Added inventory. Accessible by pressing 'E'
-Added Rocket(Ammo2), Wide rocket(Ammo3), and Bomb(Ammo4)
-Ammuniton is now set default to AntiTank
-Added the ability to buy ammo, except antitank. (Ammo1)
-Scores now depend per ammo type
-Score and ammunition reward per ammo type in easy difficulty: Ammo1: 100+10, Ammo2: 100+15, Ammo3: 125+20, Ammo4: 50+5
-Score and ammunition reward per ammo type in normal difficulty: A1: 100+7, A2: 100+9, A3:120+5, A4: 50+5
-Score and ammunition reward per ammo type in hard difficulty: A1: 50+5, A2: 50+7, A3: 75+5, A4: 25+3
-Score and ammunition reward per ammo type in expert difficulty: A1: 25+3, A2: 25+5, A3: 50+7, A4: 10+2
-Changes to enemy movement mechanics. The enemy shooting will now follow the enemy tank again.
-Updated help screen
v0.1.0.35 Alpha build 600 - June 7, 2020
-Added pause button. 'Z' to Pause
-Updated help page relating to pause button
-Changes to enemy shooting mechanics
-Fixed Buy health menu that has improper spacing
-Changed G to Q button to buy in health menu
-Fixed bug causing theme reset after the game over screen
-Buying ammo, and inventory menu, and buying health no longer requires pressing 'ENTER'
-Exiting inventory menu has changes. It's now 'E' instead of 'S'
-Buying health now requires pressing 'W' instead of 'Q'
-Exiting health menu now requires pressing 'Q' instead of 'H'
-Added prompt in game over screen: 1 - Yes, 0 - No
v0.1.0.36 Alpha build 634 - June 8, 2020
-Fixed bug causing other ammo turn into negative values when empty
-Pause menu no longer requires pressing 'ENTER'
-Changes to enemy shooting mechanics
-EXP: Enemy shooting player will now decrease health depending on difficulty. Easy-1,Normal-2,Hard-3,Expert-5
-Changed price for buying health. It's now 100 scores rather than 500
-Can no longer buy health on expert difficulty
-Inventory, Buy Ammo, Pause, and Health menu will now display 'Invalid input' when used incorrect input
-Added unused General settings menu under settings menu
-Added unused Config file and Reset config file settings
-Changes to config.txt. Not working yet
-Added visual to Rocket and Wide rocket mode
-Added more help info on help page relating to inventory and store
-Removed some info on help page relating to other game mode
-Changes to dead tank visual
-Changed default health from 20 to 25
-Added get chance in game over screen once the player got more than 500 scores
v0.1.0.37 Alpha build 653 - June 9, 2020
-Changes to config file code
-Recent scores now save to a file
-Added "Save settings" in main menu. Saves every variables that requires switch values
-Reset settings on general settings now resets the config.txt file
-Does not load settings yet
-Now writes to a config file
v0.1.0.38 Alpha build 671 - June 10, 2020
-Changes to minor game visuals
-Changes to enemy shooting mechanics
-Tank will no longer damage when shield mode is on
-Enemy shooting mechanics is no longer under experimental features
-Added unused load settings
v0.1.0.39 Alpha build 693 - June 17, 2020
-Now built for 64-bit systems
-Added more text in config file: "settings" and "tankColor="
-Changes to settings load mechanics
-Changes to compilation version
v0.1.0.40 Alpha build 715 - June 19, 2020
-Fixed several compliation issues
-Changed delay for recent score screen
-Changes to config loading settings
-Full support to 64-bit systems
v0.1.0.41 Alpha build 738 - June 20, 2020
-Changes to load and save settings
-Load settings is now under experimental features
-Loading bar is now larger
-Loading screen is now faster
-Added debug mode D: Slow mode
-Turning off debug mode now requires pressing '0' instead of 'D'
-Added chance exceed value. "Get chance" option can now be only used once each gameplay
v0.1.0.Pre-Release 1 build 746 - June 20, 2020
-Fixed negative value bugs from switiching ammunition
-Changes to quit option
v0.1.0.Pre-Release 2 build 752 - June 20, 2020
-Updated Help page
-Nerfed price of health from 100 to 125 scores
v0.1.0 Alpha build 756 - June 20, 2020		Official Release
-Tank: Shoots enemy
-Enemy Tank: Shoots player
-GUI and Menus
-Inventory, Health Store and Ammo Store
-WASD and Arrow Controls
-Gamemode: Shooting
-Difficulty: Easy-Expert
-Settings page, Help page
-Themes in Video Settings
-Set your own playername
-Track scores using Statistics
-Debug modes A-D
-Experimental Features: (ALPHA) Load settings, Tank visuals, Tank color
-This version currently does not load settings.
v0.1.1 Alpha build 759 - June 22, 2020
-Updated help screen
-Word 'build' is now 'BUILD' to follow ALL-CAPS rule
v0.2.0.0 Alpha build 777 - June 23, 2020
-Added class and header file for minimal game mode
-Added basic GUI for minimal game mode
-Minimal Game mode is now using namespace `miniGame`
-Minimal game mode class is using variable passing function
-Added controlls 'A'/LEFT and 'D'/RIGHT. Does not overlap GUI
-Pressing UP and 'W' writes 'SOON' temporarily
-Added shield 'S'. Does not allow movement during shield
v0.2.0.1 Alpha build 799 - June 25, 2020
-Changes to program compilation
-Added the ability to shoot in minimal mode. Not yet functional.
-Pressing 'X' in minimode will now temporarily navigate to main menu
-kbhit() is now used in minimal mode
-Added unused code to display player name on minimal mode
-Player name can now be cleared by writing "cls" or "CLS"
-Player name is now displayed on player settings page
-Added word "Score" and "Health" minimal mode GUI
v0.2.0.2 Alpha build 831 - June 26, 2020
-Added beep sounds on game over screen (both minimal and default mode)
-Added beep sounds when shooting on an enemy (default mode)
-Enemy Tank is now displayed on minimal mode
-Added non-functional code for enemy movement on minimal mode
-Added non-functional code to balance GUI in minimal mode
-Added beep sounds when it's out of ammunition
-Added 2 second delay before game over screen
-Added "Recommended Settings" and "Audio" in General settings. No function yet
-Added Recommended Settings Page
v0.2.0.3 Alpha build 852 - June 27, 2020
-Added beep sound on game startup
-Shooting trail is now longer on minimal mode
-Can now get scores on minimal mode (+25 scores)
-Added ammunition. Does not work properly.
-Added beep sounds when enemy has shoot in minimal mode
v0.2.0.4 Alpha build 867 - June 28, 2020
-Added Game Over Screen
-Added Highscore and Recent score
-Fully functional Game over scren.
-Pressing 'X' now asks for game over confirmation
-Health can now decrease by having no ammunition
-Can now go to game over screen once health point is equal or less than 0
-Bug: Score and Ammunition reward is not working
v0.2.0.5 Alpha build 873 - June 29, 2020
-Changed difficulty selection for minimal mode
-Score rewards in minimal mode: Easy: 25, Normal: 25, Hard: 10, Expert: 5
-Ammunition rewards in minimal mode: Easy: 10, Normal: 7, Hard: 5, Expert: 3
-Fixed bug causing ammunition default value is set to 25 after game over screen
v0.2.0.6 Alpha build 888 - June 30, 2020
-Enemy tank can now shoot players in minimal mode
-Decrases health depends on difficulty. Easy - 1 Normal - 2 Hard - 3 Expert - 5
-0 Health Point will now game over in minimal mode
-Fixed bug causing health point will turn into a negative value in minimal mode
v0.2.0.7 Alpha build 898 - July 3, 2020
-Added variables to pass and view on statistics page for minimal mode
-Does not pass values yet
-Renamed "Coming Soon" at gamemode 5 on statistics page
-Added text "GM1" and "GM5" on statistics page which represents gamemode number
v0.2.0.8 Alpha build 916 - July 4, 2020
-Changes to variables
-Improved pointers
-Recent score and hiscore is now displayed as "0" for minimal mode
-Does not function yet
-Variables from gamemode 5 can now be cleared in statistics page
-Added Pause button in minimal mode. Press 'Z' to pause and continue
-Fixed misaligned "Score" text in minimal mode
v0.2.0.9 Alpha build 945 - July 7, 2020
-Added audio settings
-Beep sounds can now be muted
-Variables for minigame statistics is now a static integer
-Can now store variable data in statistics page for gamemode 5
-Added Navigation Text in Gamemode 5, Statistics, Debug mode, General settings, Controller settings, Video settings
	Recommended settings, Player settings, Tank color settings, Gamemode 1, Experimental Features, Changelogs
	Shooting
-In player settings, renamed "Color" to "Tank Color"
-Added help page for Minimal game
-Updated help page for Shooting mode (removed "down" in 'S' control) amd multiple ammo types
-Playername in gamemode 5 is now displayed
v0.2.0 Pre-release 1 Alpha build 950 - July 7, 2020
-Fixed bug causing inability to navigate to help page gamemode 5
-Added "0 - Back" text to gamemode 5 help page
-Added highscore for gamemode 5 in gamemode selector
v0.2.0 Alpha build 952 - July 7, 2020		Minimal Update
-Added minimal game mode. It's shooting mode but simplier.
-Added beep sounds (game over, enemy hit, and program start)(both gamemode 1 & 5)
-Added audio settings. Can mute all beep sounds
-Added recommended settings page
-Added navigation text on some pages
-Playername is now displayed on settings page
-Minor changes to shooting mode
-Minor bug fixes
v0.3.0.0 Alpha build 966 - July 9, 2020
-Removed coming soon text for Classic mode
-Added classes and objects for classic mode
-Added required libraries for classic mode
-Added basic functions for classic mode
-Added basic variables for classic mode
-Added controls A, D, S for classic mode
-Can unshield with 'W' but not functional yet
-Added text "SCORE" in classic mode
v0.3.0.1 Alpha build 985 - July 11, 2020
-Removed "Coming Soon" text while pressing 'W'
-Added shooting in classic mode
-Added shooting trail in classic mode
-Moved "SCORE" text down to be used with playername in classic mode
-Added Ammunition counter in classic mode. Does not work properly.
-Added Health points in classic mode. Does not work yet.
-Minor changes to versioning
-Changed build date text in Info page
-Added an info to determine wheter the program is x64 or x86
-Added highscore and recent score in classic mode
-Added game over screen in classic mode
-Added game restart. Only occurs when lost 1 life in classic mode
v0.3.0.2 Alpha build 1046 - July 13, 2020
-Added block randomizer in classic mode
-Added block "I" in classic mode
-Removed `kbhit()` in classic mode
-"I" Appears and disappears once specified value is met
-"Recent score" will now appear properly on classic mode
-Displays 20 "I" blocks in classic mode
-Fixed bug on info page displaying western time instead of utc+08:00(china)
-Added update button 'E' in classic mode
-Update button will update blocks, -5 ammunition, -50 score
-A score with -500 will now game over
-Fixed typo in Highscore on classic mode
-Can now get scores by shooting blocks 1-3 temporarily
-Temporarily added goto statements
v0.3.0.3 Alpha build 1079 - July 16, 2020
-Added info text for amd64(bool 0/1) in info page
-Some blocks will now dissapear once shoot in classic mode (1-3 blocks)
-Blocks will now update per 10 int value (easy) in classic mode
-Blocks will now update per 5 int value (normal) in classic mode
-Blocks will now update per 3 int value (hard) in classic mode
-Blocks will now update per 1 int value (very hard) in classic mode
-Re-added `kbhit()` in classic mode
-Changes to randomzier on different difficulty in classic mode
-Bug: `int clearScreen` does not turn into 0 automatically in classic mode
v0.3.0.4 Alpha build 1100 - July 19, 2020
-More blocks now support scoring (4-11) on classic mode
-On easy difficulty, block update is now longer (50 value) instead of 10 value on classic mode
-On normal difficulty, block update is now longer (25 value) instead of 5 value on classic mode
-On hard difficulty, block update is now longer (10 value) instead of 3 value on classic mode
-On very hard difficulty, block update is now longer (5 value) instead of 1 value on classic mode
-Removed value counter to improve performance on classic mode
-Pressing 'Z' no longer quits the game immediately. It's now used to pause. Z to unpause
-Added quit by pressing 'X' in classic mode (including beep sound)
-Added beep sounds for quit confirmation on classic mode, minimal, and shooting
-Changed beep sound for program startup
-Minor graphical fixes
-Known bugs: On classic mode, some blocks (1-11) cannot be destroyed
v0.3.0.5 Alpha build 1126 - July 23, 2020
-More blocks now support scoring (12-20) on classic mode
-Fixed bug causing score to overlap on classic mode
-Fixed bug causing blocks to overlap on classic mode
-Fixed bug that shooting a block doesn't give a score, unless when spammed on classic mode
-Added result2 for normal difficulty on classic mode. Not yet used
-Update button in classic mode is now difficulty aware
-The entire block code is moved to easy difficulty. Normal-Very hard difficulties might not work
-Temporarily added "0" to represent value change in normal difficulty on classic mode
-Normal difficulty has now it's own blocks. It's now 1-10 blocks
v0.3.0.6 Alpha build 1145 - July 31, 2020
-More blocks in normal difficulty now support scoring (11-20) on classic mode
-Removed shielding on classic mode
-Added scoping. Can be accessed with 'S'. Does not allow player to move direction. Only for classic mode
-On classic mode, scores is now different. easy = 50, normal = 25
-On hard difficulty, classic mode. 10 scores per block shot.
-More blocks in hard difficulty now support scoring (1-10) on classic mode
v0.3.0.7 Alpha build 1150- August 3, 2020
-More blocks in hard difficulty now support scoring (1-20) on classic mode
-Hard difficulty will now give 1 ammunition per enemy shoot instead of 2 on classic mode
-More blocks in very hard difficulty now support scoring (1-20) on classic mode
-On very hard difficulty, classic mode. Now rewards 5 scores, 0 ammunition per enemy shot.
-On very hard difficulty, classic mode. Now updates slower. 6 value instead of 5
v0.3.0.8 Alpha build 1171/1172 - August 8, 2020
-Added custom difficulty in classic mode.
-Can now set CLSVALUE in custom difficulty in classic mode
-Added github links in info page
-Can now set AMPLIFIER in custom difficulty in classic mode
-Can now set SCORES and AMMUNITION value. Cannot use custom ammunition yet
-Custom amplifier and clsvalue for custom difficulty can now be used in gameplay
-Custom scores and ammunition can now be used on custom difficulty (blocks 1-5)
-Can now set and use custom ammunition reward
v0.3.0.9 Alpha build 1197 - August 15, 2020
-Custom scores and ammunition can now be used on custom difficulty (blocks 6-20)
-Can now customize healthPoints
-Fixed bug causing custom ammunition reward not to work on classic mode
-Movement value can now be changed
-Added value limit in movement value
-Can now customize block results value (block 1 value 1-7)
-Score will now decrease by 1 per tank movement on classic mode
v0.3.0.10 Alpha build 1204 - August 20, 2020
-Added variables and functions to work with statistics recording for classic mode
-Removed "COMING SOON" in statistics page, classic mode
-Added statistics for Gamemode 3, classic mode
-Added the ability to buy health on classic mode
-Temporarily removed custom mode in classic mode. To be continued on 0.4.0
v0.3.0-rc.1 Alpha build 1208 - August 23, 2020
-Added help page for classic mode
-Removed "COMING SOON" in help page for classic mode
-Temporarily disabled custom mode (not removed) for 0.4.0
-Updated changelogs page
v0.3.0 Alpha build 1209 - August 23, 2020 - Classic Mode Update
-Added classic mode. A dumbed-down and failed version of shooting games in tetris devices.
-Added github links in info page
-Added more info in info page (x86, x64, amd64)
-Bug fixes