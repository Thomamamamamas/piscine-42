#!/bin/zsh
ifconfig -a link | grep "ether " | cut -c 8-
