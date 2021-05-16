#!/bin/bash

echo "Changing Directory to st git, assuming patches are unstaged"
cd patching/st

echo "Staging Changes..."
git add .

# make changes here as needed
echo "Commiting Changes..."
git commit -m "st-knaveightt merging patch changes"

# make changes here as needed
echo "Creating Patch diff file..."
git format-patch --stdout HEAD^ > st-knaveightt-20210516b-shorthash.diff

# make changes here as needed
echo "copying created diff up the directory tree..."
cd ../../
cp patching/st/st-knaveightt-20210516b-shorthash.diff .

echo "Ended."
