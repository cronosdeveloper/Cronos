
Debian
====================
This directory contains files used to package cronosd/cronos-qt
for Debian-based Linux systems. If you compile cronosd/cronos-qt yourself, there are some useful files here.

## cronos: URI support ##


cronos-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cronos-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cronosqt binary to `/usr/bin`
and the `../../share/pixmaps/cronos128.png` to `/usr/share/pixmaps`

cronos-qt.protocol (KDE)

