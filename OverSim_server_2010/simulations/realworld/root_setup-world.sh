#!/bin/bash

# script only runs on Linux

modprobe tun
#../../src/OverSim -u Cmdenv -f world.
../../src/OverSim -f world_simple.ini -u Cmdenv
#../../src/OverSim -f world_simple.ini
#../../src/OverSim -f world.ini

