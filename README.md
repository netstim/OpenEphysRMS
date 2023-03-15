# Open Ephys Root Mean Square

Plugin for the Open Ephys GUI to compute the exponentially weighted sliding root mean square value of the signal. This plugin is based on [continuous-stats](https://github.com/tne-lab/continuous-stats).

![](Resources/UI.png?raw=true)

## Installation

### **Windows**

#### _Manual_

The compiled dll for GUI v6 is available from the Releases page. It should be downloaded and placed under `C:\ProgramData\Open Ephys\plugins-api8`.

#### _Github CLI_

Using Github CLI is easy to stay up to date with latest release using the following command:

```PowerShell
gh release download --clobber --dir "C:\ProgramData\Open Ephys\plugins-api8" --pattern *.dll --repo netstim/OpenEphysRMS
```

#### _From Source_

Alternativly, one can also compile this plugin from source. See [Open Ephys GUI Documentation](https://open-ephys.github.io/gui-docs/Developer-Guide/Compiling-plugins.html) for instructions.

#### _From the GUI_

The plugin is currently not available from the GUI Plugin installer. Use one of the avobe methods.

### **MacOS**

#### _Manual_

The compiled bundle for GUI v6 is available from the Releases page. It should be downloaded and placed under `~/Library/Application Support/open-ephys/plugins-api8`.

#### _Github CLI_

Using Github CLI is easy to stay up to date with latest release using the following command:

```sh
gh release download --clobber --dir ~/Library/Application\ Support/open-ephys/plugins-api8 --pattern *.bundle.zip --repo netstim/OpenEphysRMS;\
unzip -o ~/Library/Application\ Support/open-ephys/plugins-api8/*.bundle.zip -d ~/Library/Application\ Support/open-ephys/plugins-api8/
```

#### _From Source_

Alternativly, one can also compile this plugin from source. See [Open Ephys GUI Documentation](https://open-ephys.github.io/gui-docs/Developer-Guide/Compiling-plugins.html) for instructions.

#### _From the GUI_

The plugin is currently not available from the GUI Plugin installer. Use one of the avobe methods.