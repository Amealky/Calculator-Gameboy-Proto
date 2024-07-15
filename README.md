``Reupload project from 2016 : This project was recovered so don't take commits into accounts``

<h1 align="center"> Calculator Gameboy Prototype <h1>

<p align="center">
        <img src="https://img.shields.io/badge/Gameboy-%204--2--1?style=for-the-badge&label=platform&color=yellowgreen">
        <img src="https://img.shields.io/badge/C-%204--2--1?style=for-the-badge&logo=SDL&logoColor=white&label=language&color=lightgrey">
</p>

<p float="left" align="center">
  <img src="https://i.ibb.co/g3N3nqR/calculator-0.png" alt="calculator-0" border="0" width="300" >
  <img src="https://i.ibb.co/VTZ9QPs/calculator-1.png" alt="calculator-1" border="0" width="300" >
</p>


## Overview
``This project is a non finished Gameboy calculator prototype`` when you can... calculate ( only addition available for now )


The github file already provide the ``.gb``, so just drag n drop it into a Gameboy Emulator [Bgb for windows user](http://bgb.bircd.org/) or [mGBA for linux and mac user](https://mgba.io/)


The game was made in C using the [GBDK devkit](https://github.com/gbdk-2020/gbdk-2020) for Nintendo Gameboy and more


## Controls
Beware to set your emulator controls before !

A -> Choose number

B -> Erase number

Left/Right/Up/Down -> Move on the keyboard

Start -> Start program/Validate a number/Return to main screen


Note : Build with G++11.4.0 

Select -> Open manual page/Exit manual page


## Build the project

If you want to build the project you can follow the step below :
- Ensure you have GCC installed
- Download the [GBDK devkit](https://github.com/gbdk-2020/gbdk-2020)
- Put the GBDK folder where you want but copy the path to it
- Then open the Makefile and set the ``GBDK_FOLDER`` var at the path you got (keep the / at the end of the GBDK path)
- Finally just run ``make`` command this will replace the .gb by a freshly builded one
- Then you can just drag n drop it into a GB emulator
- (Optionnal) if you got lot of compilation file you can run ``make clean``
