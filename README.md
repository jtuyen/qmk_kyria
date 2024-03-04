# Kyria: One keyboard to rule them all.
This QMK configuration is an ongoing process of discovering new QMK features and customizing the layout according to my own daily workflow. This config is geared for RP2040 microcontrollers as Pro Micros have limited space so it will not work if you try to duplicate this config.

To compile:
```
qmk flash -kb splitkb/kyria/rev2 -e CONVERT_TO=promicro_rp2040
```

A high level overview of customized keys:
- Customized layouts for MacOS and Windows
- Tap Dance
- Chording/Combos
- Mod-Tap
- Modifiers
- Insomnia mode
- Leader key for tmux shortcuts
- Hyper key for shortcat activation

Mac OS/Windows Layers
![keyboard image](https://raw.githubusercontent.com/jtuyen/qmk_kyria/main/layers.png)