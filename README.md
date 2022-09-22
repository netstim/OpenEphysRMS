# Open Ephys Root Mean Square

Plugin for the Open Ephys GUI to compute the exponentially weighted sliding root mean square value of the signal. This plugin is based on [continuous-stats](https://github.com/tne-lab/continuous-stats).

![](Resources/UI.png?raw=true)

## Installation

- Manual

The compiled dll for GUI v6 is available from the Releases page. It should be downloaded and placed under `C:\ProgramData\Open Ephys\plugins-api8`.

- Github CLI

Using Github CLI is easy to stay up to date with latest release using the following command:

```PowerShell
gh release download --clobber --dir "C:\ProgramData\Open Ephys\plugins-api8" --pattern *.dll --repo netstim/OpenEphysRMS
```

- From Source

Alternativly, one can also compile this plugin from source. See Open Ephys GUI Documentation for instructions.

- From the GUI

The plugin is currently not available from the GUI Plugin installer. Use one of the avobe methods.