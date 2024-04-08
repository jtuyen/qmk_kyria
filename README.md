# Kyria: One keyboard to rule them all.
This QMK configuration is an ongoing process of discovering new QMK features and customizing the layout according to my own daily workflow.

To compile:
```
qmk flash -kb splitkb/kyria/rev2 -e CONVERT_TO=promicro_rp2040
```

To export C to JSON:
```
qmk c2json -km keymap.c -kb splitkb/kyria/rev2 -o export.json keymap.c
```

A high level overview of customized keys and what problem it solves:
- Customized layouts for MacOS and Windows
  - Dedicated keys for text highlighting and navigation
  - Dedicated keys to scroll through text windows without a mouse
  - Specific combos are set between Windows and MacOS
  - Each layer has predefined LED color of which is activated when triggered
  - Tactile scroll wheel serves as a vertical scroller
- Chording/Combos
  - To compact more keys into the main Mac/Windows layers
  - Common keyboard shortcuts like Undo, Copy, and Paste are compacted into combo keys
  - Windows and Alfred keyboard shortcuts to show snippets or paste history features
  - Homerow modifers to further compact more keys into a layer. Kinda works, still evaluating optimal positioning.
- Mod-Tap
  - Heavy usage of compacting modifier keys into one key to minimize weird hand movements of holding down keys
  - An extra space key on the left side of the keyboard as sometimes I would like to preview files in Finder while my hand is on the mouse
- Modifiers
  - Similar reasons when using mod-tap features and heavily used
  - Commonly used actions/commands should be compacted into a single or double keystroke. As a result, it will allow you to abstract away from your dotfiles and your custom QMK keyboard will become a real tool. The only thing I want to do with application is setting up keyboard shortcuts and not download a whole bunch of custom configs and dependencies
  - The MEH modifier is commonly used as my global application shortcut. This way it saves my sanity of remembering what key combinations to trigger for each application, it's just MEH+KC
- Insomnia mode
  - Solves my issues of VPN timing out due to inactivity
  - Walking away from the keyboard and not be afraid of losing my slow drip data exfil session :)
- Leader key for shortcuts for commonly used tools
  - No need to import custom tmux config files
  - All shortcuts are neatly organized into single keystrokes
  - Untapped potential of compacting and expansion of keys
- Dynamic macros
  - Record and playback a long string of commands on the fly
  - Useful in situations where copy and paste isn't available in a shoddy remote shell session

Mac OS/Windows Layers
![keyboard image](https://raw.githubusercontent.com/jtuyen/qmk_kyria/main/layers.png)
