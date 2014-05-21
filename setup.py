# setup.py

from distutils.core import setup, Extension

setup(name="csample",
      py_modules=['csample'], 
      ext_modules=[Extension("_csample",
                     ["csample.i","csample.c"],
                  )]
      
)
