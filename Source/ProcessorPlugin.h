/*
------------------------------------------------------------------

This file is part of the Open Ephys GUI
Copyright (C) 2022 Open Ephys

------------------------------------------------------------------

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PROCESSORPLUGIN_H_DEFINED
#define PROCESSORPLUGIN_H_DEFINED

#include <ProcessorHeaders.h>

class ProcessorPlugin : public GenericProcessor
{
	friend class ProcessorPluginEditor;

public:
	/** The class constructor, used to initialize any members. */
	ProcessorPlugin();

	/** The class destructor, used to deallocate memory */
	~ProcessorPlugin();

	/** If the processor has a custom editor, this method must be defined to instantiate it. */
	AudioProcessorEditor *createEditor() override;

	/** Called every time the settings of an upstream plugin are changed.
		Allows the processor to handle variations in the channel configuration or any other parameter
		passed through signal chain. The processor can use this function to modify channel objects that
		will be passed to downstream plugins. */
	void updateSettings() override;

	/** Called whenever a parameter's value is changed (called by GenericProcessor::setParameter())*/
	void parameterValueChanged(Parameter *param) override;

	/** Defines the functionality of the processor.
		The process method is called every time a new data buffer is available.
		Visualizer plugins typically use this method to send data to the canvas for display purposes */
	void process(AudioBuffer<float> &buffer) override;

private:
	// time constant in milliseconds
	double window_ms;

	// state
	Array<double> currMean;
	Array<double> currVar;
	Array<bool> startingRunningMean; // flag to treat the first sample differently

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ProcessorPlugin);
};

#endif