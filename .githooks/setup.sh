#!/bin/sh
# Activate the repo's tracked git tooling.
# Run once after cloning: sh .githooks/setup.sh
git config core.hooksPath .githooks
git config core.excludesFile .githooks/gitignore
chmod +x .githooks/pre-commit .githooks/setup.sh 2>/dev/null
echo "Activated: core.hooksPath=.githooks, core.excludesFile=.githooks/gitignore"
