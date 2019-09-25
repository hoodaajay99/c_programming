---
id: Installing-VS-Code-and-Compilers-on-Windows
title: Installing VS Code and Compilers on Windows
sidebar_label: Installing Software on Windows
---

> Visual Studio Code is a source-code editor developed by Microsoft for Windows, Linux and macOS. It includes support for debugging, embedded Git control and GitHub, syntax highlighting, intelligent code completion, snippets, and code refactoring.

## Why VS Code for C Programming
So far IDEs like CodeBlocks, Xcode, Visual Studio have been used for C/C++ programming and are the IDEs of choice. You are free to use them for this course.

But I have decided to use VS code for following reasons - 
- Support for C/C++ has been added in early 2019
- Built in Git - Version control system
- Intellisense: syntax highlighting and autocomplete
- Vibrant community
- Ease of use, great coding experience.

## Follow these steps to Install VS Code on Windows

### Step 1: Download
- Got to site: https://code.visualstudio.com/download
- Download VSCodeUserSetup-{version}.exe\

> Alternatively, you can also [download a Zip archive]([https://link](https://code.visualstudio.com/docs/?dv=winzip)), extract it and run VS Code from there.

### Step 2: Install

- Run the installer (VSCodeUserSetup-{version}.exe). This will only take a minute.
- VS Code is installed under `C:\users\{username}\AppData\Local\Programs\Microsoft VS Code`

> .NET Framework 4.5.2 or higher is required for VS Code. If you are using Windows 7, make sure you have at least .NET Framework 4.5.2 installed.

> VS Code can be installed at both Windows user and system level.

### Windows Subsystem for Linux and PowerShell

Recent Windows builds (Windows 10) provide great cross-platform development environment using WSL `Windows Subsystem for Linux`.

With WSL, you can install and run Linux distributions on Windows. This enables you to develop and test your source code on Linux while still working locally on your Windows machine.

`PowerShell` is another application that provides unix/linux style shell. 

> PowerShell and WSL terminals are recommended for better developer experience.

## Compiler Options on Windows
- C/C++ compiler in Microsoft Visual Studio 2017 Community Edition
- GCC, bundled in a MinGW distribution.
- clang and llvm
- Digital Mars C/C++ compile
- Intel C/C++ compiler (with Parallel Studio IDE)

## GCC Compiler on Windows - MinGW

MinGW called `Minimalist GNU for Windows`, is a minimalist development environment for native Microsoft Windows applications.

MinGW includes:
- A port of the GNU Compiler Collection (GCC), including C, C++
- GNU Binutils for Windows (assembler, linker, archive manager)

> MinGW, being Minimalist, does not, and never will, attempt to provide a POSIX runtime environment for POSIX application deployment on MS-Windows.

### Installing MinGW on Windows

- Downoad MinGW - https://sourceforge.net/projects/mingw/
- Exe file will be downloaded with the name `mingw-get-setup.exe`
- Click and Install `mingw-get-setup.exe` in default path `C:\MinGW`
- Select all packages from "Package selection Window"
- Click on Installation > Apply Changes
- Wait for the process to complete
- Close the window after successful installation

### Setting environment variables
- To use gcc and g++ command from terminal
- In Search, search for System `Control Panel`
- Goto `Advanced system settings`
- Click `Environment Variables`
- In `System Variables`, find the `PATH` environment variable
- `Edit` the `PATH` environment variable
- Add `C:\MinGW\bin` path to `PATH` environment variable
- Close all Windows.
- Open `Command Prompt` or `PowerShell`, type `gcc` and enter.
- If you see the `gcc` output, `PATH` is correctlt set 
