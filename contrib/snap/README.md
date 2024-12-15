# lucecoin Snap Packaging

Commands for building and uploading a lucecoin Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official lucecoin binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register lucecoin-core
snapcraft upload \*.snap
sudo snap install lucecoin-core
```

### Usage
```
lucecoin-unofficial.cli # for lucecoin-cli
lucecoin-unofficial.d # for lucecoind
lucecoin-unofficial.qt # for lucecoin-qt
lucecoin-unofficial.test # for test_lucecoin
lucecoin-unofficial.tx # for lucecoin-tx
```

### Uninstalling
```
sudo snap remove lucecoin-unofficial
```