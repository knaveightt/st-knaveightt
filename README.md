# st-knaveightt
This is my own PKGBUILD and work directory for patching st by suckless.org
This is for st version *0.8.4*

Running makepkg on this directory will use the provided .diff to patch st with a couple patches I've pulled for simple terminal. The patches I am incorporating are in the patching/patchlist.txt file. 

The patching directory is what I use to create my git formatted patch file, pulling in the latest source code tree from suckless's repository, applying the patches and handling merge conflicts, and ultimately generating the latest st-knaveightt diff file to patch st quickly.

I created a compile-patch script which I will build out into a make file to handle the processess automatically at some point.
  
## Other Important Comands
Go back 1 commit on a git directory using "git reset HEAD^"
Regenerate PKGBUILD checksums with "makepkg -g >> PKGBUILD"
