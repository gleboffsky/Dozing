# Dozing

Desktop controller for a CNC / 3D-printer: generates G-code from templates,
sends it over a serial port and shows live telemetry.

## Features

- G-code generation from templates (simple / advanced)
- Serial-port communication: port, baud rate, 8N1
- Live console and telemetry: T1/T2, X/Y/Z/E, speed
- Template editor and quick actions (firmware, shutdown)
- Settings and templates stored as JSON

## Stack

C++, Qt 5 (Widgets, SerialPort), nlohmann/json, qmake / CMake, Windows.

## Build

Requirements: Qt 5.15+ with **Qt Serial Port**, MSVC 2019+.

```bash
# qmake
qmake Dozing.pro
nmake

# or CMake
cmake -B build
cmake --build build
```

Before connecting, select the serial port and baud rate in the UI.

## Structure

```
mainwindow.*      main window, timer, telemetry
ListCalc.*        worker thread: serial port, G-code exchange
savetemplate.*    template saving
deletetemplate.*  template deletion
json-develop/     JSON library
Dozing.pro        qmake project
```
