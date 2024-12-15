
Debian
====================
This directory contains files used to package lucecoind/lucecoin-qt
for Debian-based Linux systems. If you compile lucecoind/lucecoin-qt yourself, there are some useful files here.

## lucecoin: URI support ##


lucecoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lucecoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lucecoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/lucecoin128.png` to `/usr/share/pixmaps`

lucecoin-qt.protocol (KDE)

