# Calf Studio gear

## Important

This project is considered end-of-life due to its plugin UI's relying
on the already phased-out GTK2 framework. It will be kept alive for other
projects that depend on its code or the plugins, but no further
development other than maintenance will happen here. Please refer to the
new VST3 project [calfNXT](https://github.com/boomshop/calfnxt) if you're
looking for a successor of the plugins.

## Overview

[![Build status](https://github.com/calf-studio-gear/calf/actions/workflows/build.yml/badge.svg)](https://github.com/calf-studio-gear/calf/actions/workflows/build.yml)

### :warning: **WARNING** :warning: 

* This is an active fork for keeping Calf alive as an LADSPA (v1) fork, predominatly for LMMS.
* This source repository is a `git submodule` for use with [LMMS](https://github.com/lmms).  It will not build properly on its own.
   * For details how to build, see [lmms/plugins/LadspaEffect/calf](https://github.com/LMMS/lmms/tree/master/plugins/LadspaEffect/calf).
* Note: LMMS 1.3.0 and higher build this library as `veal.so`, not `calf.so`.

---

Calf Studio Gear is an audio plug-in pack for LV2 and JACK environments
under LINUX operating systems. The suite contains lots of effects
(delay, modulation, signal processing, filters, equalizers, dynamics,
distortion and mastering effects), instruments (SF2 player, organ
simulator and a monophonic synthesizer) and tools (analyzer, mono/stereo
tools, crossovers). Calf Studio Gear aims for a professional audience.

Please visit the website below for further information,
screenshots and installation instructions.

http://calf-studio-gear.org

## Dependencies and licenses

This project is licensed under LGPL-2.1-only.
It uses GTK and FluidSynth (LGPL-2.1-or-later).
It also uses Expat (MIT) and LV2 (ISC).
For details, see `licenses/README_LICENSES.txt` in CALF's source tree.

## Features

- Instruments and tone generators (Organ, Monosynth, Wavetable, Fluidsynth)
- Modulation effects (Multi Chorus, Phaser, Flanger, Rotary, Pulsator, Ring Modulator)
- Delay effects (Reverb, Vintage Delay,Compensation Delay Line, Reverse Delay)
- Dynamic processors (Compressor, Sidechain Compressor, Multiband Compressor, Mono Compressor, Deesser, Gate, Sidechain Gate, Multiband Gate, Limiter, Multiband Limiter, Sidechain Limiter, Transient Designer)
- Filters and equalizers (Filter, Filterclavier, Envelope Filter, Equalizer 5 Band, Equalizer 8 Band, Equalizer 12 Band, Equalizer 30 Band, Vocoder, Emphasis)
- Distortion and enhancement (Saturator, Exciter, Bass Enhancer, Tape Simulator, Vinyl, Crusher)
- Tools (Mono Input, Stereo Tools, Haas Stereo Enhancer, Multi Spread, Analyzer, X-Over 2 Band, X-Over 3 Band, X-Over 4 Band)

## Usage

Once installed there are a couple of manuals available.

- "man calf" displays some general instructions
- "man calfjackhost" gives some hints on how to use the calf rack application
- /usr/[local]/share/doc/calf (depending on your installation path) contains a HTML manual on how to use the plug-ins user interface
- The plug-in manuals can also be accessed via the GUI menus.

## Installation

In all cases, looking at [.github/workflows/build.yml](.github/workflows/build.yml) can give you a quick hint how it can be done on the systems which we test.

For more information:

* CMake:    INSTALL
* Automake: INSTALL-AUTOMAKE  (deprecated!)

