#pragma once

#define VISIT_PROCS_D3D9(visit) \
	visit(Direct3DShaderValidatorCreate9, jmpaddr) \
	visit(PSGPError, jmpaddr) \
	visit(PSGPSampleTexture, jmpaddr) \
	visit(D3DPERF_BeginEvent, jmpaddr) \
	visit(D3DPERF_EndEvent, jmpaddr) \
	visit(D3DPERF_GetStatus, jmpaddr) \
	visit(D3DPERF_QueryRepeatFrame, jmpaddr) \
	visit(D3DPERF_SetMarker, jmpaddrvoid) \
	visit(D3DPERF_SetOptions, jmpaddrvoid) \
	visit(D3DPERF_SetRegion, jmpaddrvoid) \
	visit(DebugSetLevel, jmpaddr) \
	visit(Direct3D9EnableMaximizedWindowedModeShim, jmpaddrvoid) \
	visit(Direct3DCreate9, jmpaddr) \
	visit(Direct3DCreate9Ex, jmpaddr)

#ifdef PROC_CLASS
PROC_CLASS(d3d9, dll, VISIT_PROCS_D3D9)
#endif
