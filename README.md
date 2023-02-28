Unreal Engine SHA256 Functions
============

[![MIT licensed](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE.md)

- Usable from Blueprints and C++
- Using [PicoSHA2](https://github.com/okdshin/PicoSHA2 "PicoSHA2")
- Supports hashing FString, TArray, TArray64 and files.
- Files are read in blocks instead of loading the entire file into memory.
- Async hash task in C++ using FSHA256FileHasherTask. See header file for example usage.

Blueprint Usage
------
**Hashing Strings**
![](https://drive.google.com/uc?export=view&id=1oqfnHUeRNJv4JtZxguEd_YVQNZsfdJ47)

**Hashing Arrays**
![](https://drive.google.com/uc?export=view&id=1ZTRKwfonNBCog-EMb3HlKNC-5cAmLzy6)

**Hashing Files**
![](https://drive.google.com/uc?export=view&id=1rmS6JljWadVF2O1pG1iIO5496bDM5Uyo)