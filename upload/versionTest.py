# versionTest.py

import sys
import os

#사람이 보기 편함
print("--sys.version--")
print(sys.version)

print("\n--sys.version_info--")
print(sys.version_info)

print("\n--sys.hexversion--")
print(sys.hexversion)

#정확한 버전
print("\n--anaconda environment--")
print(sys.exec_prefix.split(os.sep)[-1])
print(os.environ['CONDA_DEFAULT_ENV'])
!where pip