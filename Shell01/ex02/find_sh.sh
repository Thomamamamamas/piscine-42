#!/bin/zsh
find . -name "*.sh" | sed -e 's/\.sh$//' | awk -F "/" '{print $NF}'
