#!/bin/zsh
git log | grep "commit " | cut -c 8- | tail -n 5
