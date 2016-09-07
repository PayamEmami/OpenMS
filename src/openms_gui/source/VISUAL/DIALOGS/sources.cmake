### the directory name
set(directory source/VISUAL/DIALOGS)

### list all filenames of the directory here
set(sources_list
DataFilterDialog.cpp
FeatureEditDialog.cpp
HistogramDialog.cpp
LayerStatisticsDialog.cpp
SaveImageDialog.cpp
Spectrum1DGoToDialog.cpp
Spectrum1DPrefDialog.cpp
Spectrum2DGoToDialog.cpp
Spectrum2DPrefDialog.cpp
Spectrum3DPrefDialog.cpp
TOPPViewOpenDialog.cpp
TOPPViewPrefDialog.cpp
ToolsDialog.cpp
TheoreticalSpectrumGenerationDialog.cpp
SpectrumAlignmentDialog.cpp
TOPPASInputFileDialog.cpp
TOPPASInputFilesDialog.cpp
TOPPASOutputFilesDialog.cpp
TOPPASToolConfigDialog.cpp
TOPPASIOMappingDialog.cpp
TOPPASVertexNameDialog.cpp
)

### add path to the filenames
set(sources)
foreach(i ${sources_list})
	list(APPEND sources ${directory}/${i})
endforeach(i)

### pass source file list to the upper instance
set(OpenMSVisual_sources ${OpenMSVisual_sources} ${sources})

### source group definition
source_group("Source Files\\VISUAL\\DIALOGS" FILES ${sources})

