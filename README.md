# CS2-Sound-Replacement

intercept original CS2 sounds with fully custom ones.

## what can i use this for?
replace gun sounds with p100 pre-2016 csgo sounds, change menu sounds, etc. the posibilities are endless.

## requirements
your cheat (duh), <br>
ida, <br>
brain.

## custom sounds
#### pre-setup
1. go to "{drive}:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\sounds", and create a **'weapons'** folder inside it,
2. inside the 'weapons' folder, preferably create another folder with any name you want, lets say **'CSnd'**,
3. inside the 'CSnd' folder, we'll store all of our custom sounds (you are free to create subfolders),
4. replace the paths / sound names inside the code to their appropriate paths.

#### converting .mp3/.wav/other to **vsnd_c** 
1. to convert a regular sound file to valves format, you can use [Source2Viewer](https://github.com/ValveResourceFormat/ValveResourceFormat), but for convenience, ill be using [cs2_sound_converter](https://github.com/quad-damage/cs2_sound_converter) (recommended),
2. to avoid errors, make sure you have CS2 workshop tools installed (CS2 steam properties -> DLC -> Counter-Strike 2 Workshop Tools -> checked),
3. drag & drop your sound files onto cs2_sound_converter, it will spit out the converted files in the same dir (.vsnd_c),
4. those files can be directly dropped into the custom sounds folder and used.
