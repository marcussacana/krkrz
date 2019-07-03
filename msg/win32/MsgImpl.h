// Hardcoded internal strings
#ifndef MsgImplH
#define MsgImplH

#include "tjsMessage.h"
#include "MsgIntf.h"

#ifndef TVP_MSG_DECL
	#define TVP_MSG_DECL(name, msg) extern tTJSMessageHolder name;
	#define TVP_MSG_DECL_NULL(name) extern tTJSMessageHolder name;
#endif
//---------------------------------------------------------------------------
// Message Strings
//---------------------------------------------------------------------------
TVP_MSG_DECL_CONST(TVPScriptExceptionRaised, TJS_W("Script exception raised"))
TVP_MSG_DECL_CONST(TVPHardwareExceptionRaised, TJS_W("Hardware exception raised"))
TVP_MSG_DECL_CONST(TVPMainCDPName, TJS_W("Script Editor (Main)"))
TVP_MSG_DECL_CONST(TVPExceptionCDPName, TJS_W("Script Editor (Exception)"))
TVP_MSG_DECL_CONST(TVPCannnotLocateUIDLLForFolderSelection, TJS_W("Not found krdevui.dll"))
TVP_MSG_DECL_CONST(TVPInvalidUIDLL, TJS_W("Invalid krdevui.dll"))
TVP_MSG_DECL_CONST(TVPInvalidBPP, TJS_W("Invalid bpp"))
TVP_MSG_DECL_CONST(TVPCannotLoadPlugin, TJS_W("Cannot load Plugin %1"))
TVP_MSG_DECL_CONST(TVPNotValidPlugin, TJS_W("Not valid plugin %1"))
TVP_MSG_DECL_CONST(TVPPluginUninitFailed, TJS_W("Faild to release plugin"))
TVP_MSG_DECL_CONST(TVPCannnotLinkPluginWhilePluginLinking, TJS_W("Cannot link plugin while plugin linking"))
TVP_MSG_DECL_CONST(TVPNotSusiePlugin, TJS_W("Not Susie Plugin"))
TVP_MSG_DECL_CONST(TVPSusiePluginError, TJS_W("Susie Plugin error : %1"))
TVP_MSG_DECL_CONST(TVPCannotReleasePlugin, TJS_W("Cannot release plugin"))
TVP_MSG_DECL_CONST(TVPNotLoadedPlugin, TJS_W("Not loaded plugin %1"))
TVP_MSG_DECL_CONST(TVPCannotAllocateBitmapBits, TJS_W("Cannot allocate memory for Bitmap : %1 (size=%2)"))
TVP_MSG_DECL_CONST(TVPScanLineRangeOver, TJS_W("Scan line %1 is range over (0 to %2)"))
TVP_MSG_DECL_CONST(TVPPluginError, TJS_W("Plugin Error : %1"))
TVP_MSG_DECL_CONST(TVPInvalidCDDADrive, TJS_W("Invalid CD-DA Drive"))
TVP_MSG_DECL_CONST(TVPCDDADriveNotFound, TJS_W("CD-DA Drive not found"))
TVP_MSG_DECL_CONST(TVPMCIError, TJS_W("MCI Error : %1"))
TVP_MSG_DECL_CONST(TVPInvalidSMF, TJS_W("Invalid SMF : %1"))
TVP_MSG_DECL_CONST(TVPMalformedMIDIMessage, TJS_W("Malformed MIDI Message"))
TVP_MSG_DECL_CONST(TVPCannotInitDirectSound, TJS_W("DirectSound Initialize file : %1"))
TVP_MSG_DECL_CONST(TVPCannotCreateDSSecondaryBuffer, TJS_W("Cannot create DirectSound secondary buffer : %1/%2"))
TVP_MSG_DECL_CONST(TVPInvalidLoopInformation, TJS_W("Invalid loop information %1"))
TVP_MSG_DECL_CONST(TVPNotChildMenuItem, TJS_W("Not child menu Item"))
TVP_MSG_DECL_CONST(TVPCannotInitDirect3D, TJS_W("Cannot initialize Direct3D : %1"))
TVP_MSG_DECL_CONST(TVPCannotFindDisplayMode, TJS_W("Cannot find display mode : %1"))
TVP_MSG_DECL_CONST(TVPCannotSwitchToFullScreen, TJS_W("Cannot switch to fullscreen : %1"))
TVP_MSG_DECL_CONST(TVPInvalidPropertyInFullScreen, TJS_W("Invalid property in fullscreen : %1"))
TVP_MSG_DECL_CONST(TVPInvalidMethodInFullScreen, TJS_W("Invalid method in fullscreen : %1"))
TVP_MSG_DECL_CONST(TVPCannotLoadCursor, TJS_W("Cannot load mouse cursor : %1"))
TVP_MSG_DECL_CONST(TVPCannotLoadKrMovieDLL, TJS_W("Cannot load krmovie.dll"))
TVP_MSG_DECL_CONST(TVPInvalidKrMovieDLL, TJS_W("Invalid krmovie.dll"))
TVP_MSG_DECL_CONST(TVPErrorInKrMovieDLL, TJS_W("Error in krmovie.dll : %1"))
TVP_MSG_DECL_CONST(TVPWindowAlreadyMissing, TJS_W("Window already missing"))
TVP_MSG_DECL_CONST(TVPPrerenderedFontMappingFailed, TJS_W("Prerendered font mapping failed : %1"))
TVP_MSG_DECL_CONST(TVPConfigFailOriginalFileCannotBeRewritten, TJS_W("Cannot write %1."))
TVP_MSG_DECL_CONST(TVPConfigFailTempExeNotErased, TJS_W("Did not exit %1. Cannot delete file."))
TVP_MSG_DECL_CONST(TVPExecutionFail, TJS_W("Cannot execute %1."))
TVP_MSG_DECL_CONST(TVPPluginUnboundFunctionError, TJS_W("Plugin require %1 funcion. Bat not found function in this file."))
TVP_MSG_DECL_CONST(TVPExceptionHadBeenOccured, TJS_W(" = (Exception)"))
TVP_MSG_DECL_CONST(TVPConsoleResult, TJS_W("Console : "))
TVP_MSG_DECL_CONST(TVPInfoListingFiles, TJS_W("(info) Listing files in %1 …"))
TVP_MSG_DECL_CONST(TVPInfoTotalPhysicalMemory, TJS_W("(info) Total physical memory : %1"))
TVP_MSG_DECL_CONST(TVPInfoSelectedProjectDirectory, TJS_W("(info) Selected project directory : %1"))
TVP_MSG_DECL_CONST(TVPTooSmallExecutableSize, TJS_W("too small executable size."))
TVP_MSG_DECL_CONST(TVPInfoLoadingExecutableEmbeddedOptionsFailed, TJS_W("(info) Loading executable embedded options failed (ignoring) : %1"))
TVP_MSG_DECL_CONST(TVPInfoLoadingExecutableEmbeddedOptionsSucceeded, TJS_W("(info) Loading executable embedded options succeeded."))
TVP_MSG_DECL_CONST(TVPFileNotFound, TJS_W("file not found."))
TVP_MSG_DECL_CONST(TVPInfoLoadingConfigurationFileFailed, TJS_W("(info) Loading configuration file \"%1\" failed (ignoring) : %2"))
TVP_MSG_DECL_CONST(TVPInfoLoadingConfigurationFileSucceeded, TJS_W("(info) Loading configuration file \"%1\" succeeded."))
TVP_MSG_DECL_CONST(TVPInfoDataPathDoesNotExistTryingToMakeIt, TJS_W("(info) Data path does not exist, trying to make it ... %1"))
TVP_MSG_DECL_CONST(TVPOk, TJS_W("ok."))
TVP_MSG_DECL_CONST(TVPFaild, TJS_W("failed."))
TVP_MSG_DECL_CONST(TVPInfoDataPath, TJS_W("(info) Data path : %1"))
TVP_MSG_DECL_CONST(TVPInfoSpecifiedOptionEarlierItemHasMorePriority, TJS_W("(info) Specified option(s) (earlier item has more priority) :"))
TVP_MSG_DECL_CONST(TVPNone, TJS_W(" (none)"))
TVP_MSG_DECL_CONST(TVPInfoCpuClockRoughly, TJS_W("(info) CPU clock (roughly) : %dMHz"))
TVP_MSG_DECL_CONST(TVPProgramStartedOn, TJS_W("Program started on %1 (%2)"))
TVP_MSG_DECL_CONST(TVPKirikiri, TJS_W("Kirikiri"))
TVP_MSG_DECL_CONST(TVPUnknownError, TJS_W("Unknown error!"))
TVP_MSG_DECL_CONST(TVPExitCode, TJS_W("Exit code: %d\n"))
TVP_MSG_DECL_CONST(TVPFatalError, TJS_W("Fatal Error"))
TVP_MSG_DECL_CONST(TVPEnableDigitizer, TJS_W("Enable Digitizer"))
TVP_MSG_DECL_CONST(TVPTouchIntegratedTouch, TJS_W("The device has an integrated touch digitizer. "))
TVP_MSG_DECL_CONST(TVPTouchExternalTouch, TJS_W("The device has an external touch digitizer. "))
TVP_MSG_DECL_CONST(TVPTouchIntegratedPen, TJS_W("The device has an integrated pen digitizer."))
TVP_MSG_DECL_CONST(TVPTouchExternalPen, TJS_W("The device has an external pen digitizer."))
TVP_MSG_DECL_CONST(TVPTouchMultiInput, TJS_W("The device supports multiple sources of digitizer input. "))
TVP_MSG_DECL_CONST(TVPTouchReady, TJS_W("The device is ready to receive digitizer input."))
TVP_MSG_DECL_CONST(TVPCpuCheckFailure, TJS_W("CPU check failure."))
TVP_MSG_DECL_CONST(TVPCpuCheckFailureCpuFamilyOrLesserIsNotSupported, TJS_W("CPU check failure: CPU family 4 or lesser is not supported\r\n%1"))
TVP_MSG_DECL_CONST(TVPInfoCpuNumber, TJS_W("(info) CPU #%1 : "))
TVP_MSG_DECL_CONST(TVPCpuCheckFailureNotSupprtedCpu, TJS_W("CPU check failure: Not supported CPU\r\n%1"))
TVP_MSG_DECL_CONST(TVPInfoFinallyDetectedCpuFeatures, TJS_W("(info) finally detected CPU features : %1"))
TVP_MSG_DECL_CONST(TVPCpuCheckFailureNotSupportedCpu, TJS_W("CPU check failure: Not supported CPU\r\n%1"))
TVP_MSG_DECL_CONST(TVPInfoCpuClock, TJS_W("(info) CPU clock : %.1fMHz"))
TVP_MSG_DECL_CONST(TVPLayerBitmapBufferUnderrunDetectedCheckYourDrawingCode, TJS_W("Layer bitmap: Buffer underrun detected. Check your drawing code!"))
TVP_MSG_DECL_CONST(TVPLayerBitmapBufferOverrunDetectedCheckYourDrawingCode, TJS_W("Layer bitmap: Buffer overrun detected. Check your drawing code!"))
TVP_MSG_DECL_CONST(TVPFaildToCreateDirect3D, TJS_W("Faild to create Direct3D9."))
TVP_MSG_DECL_CONST(TVPFaildToDecideBackbufferFormat, TJS_W("Faild to decide backbuffer format."))
TVP_MSG_DECL_CONST(TVPFaildToCreateDirect3DDevice, TJS_W("Faild to create Direct3D9 Device."))
TVP_MSG_DECL_CONST(TVPFaildToSetViewport, TJS_W("Faild to set viewport."))
TVP_MSG_DECL_CONST(TVPFaildToSetRenderState, TJS_W("Faild to set render state."))
TVP_MSG_DECL_CONST(TVPWarningImageSizeTooLargeMayBeCannotCreateTexture, TJS_W("warning : Image size too large. May be cannot create texture."))
TVP_MSG_DECL_CONST(TVPUsePowerOfTwoSurface, TJS_W("Use power of two surface."))
TVP_MSG_DECL_CONST(TVPCannotAllocateD3DOffScreenSurface, TJS_W("Cannot allocate D3D off-screen surface/HR=%1"))
TVP_MSG_DECL_CONST(TVPBasicDrawDeviceFailedToCreateDirect3DDevices, TJS_W("BasicDrawDevice: Failed to create Direct3D devices: %1"))
TVP_MSG_DECL_CONST(TVPBasicDrawDeviceFailedToCreateDirect3DDevicesUnknownReason, TJS_W("BasicDrawDevice: Failed to create Direct3D devices: unknown reason"))
TVP_MSG_DECL_CONST(TVPBasicDrawDeviceTextureHasAlreadyBeenLocked, TJS_W("BasicDrawDevice: Texture has already been locked (StartBitmapCompletion() has been called twice without EndBitmapCompletion()), unlocking the texture."))
TVP_MSG_DECL_CONST(TVPInternalErrorResult, TJS_W("Internal error/HR=%1"))
TVP_MSG_DECL_CONST(TVPBasicDrawDeviceInfPolygonDrawingFailed, TJS_W("BasicDrawDevice: (inf) Polygon drawing failed/HR=%1"))
TVP_MSG_DECL_CONST(TVPBasicDrawDeviceInfDirect3DDevicePresentFailed, TJS_W("BasicDrawDevice: (inf) IDirect3DDevice::Present failed/HR=%1"))
TVP_MSG_DECL_CONST(TVPChangeDisplaySettingsFailedDispChangeRestart, TJS_W("ChangeDisplaySettings failed: DISP_CHANGE_RESTART"))
TVP_MSG_DECL_CONST(TVPChangeDisplaySettingsFailedDispChangeBadFlags, TJS_W("ChangeDisplaySettings failed: DISP_CHANGE_BADFLAGS"))
TVP_MSG_DECL_CONST(TVPChangeDisplaySettingsFailedDispChangeBadParam, TJS_W("ChangeDisplaySettings failed: DISP_CHANGE_BADPARAM"))
TVP_MSG_DECL_CONST(TVPChangeDisplaySettingsFailedDispChangeFailed, TJS_W("ChangeDisplaySettings failed: DISP_CHANGE_FAILED"))
TVP_MSG_DECL_CONST(TVPChangeDisplaySettingsFailedDispChangeBadMode, TJS_W("ChangeDisplaySettings failed: DISP_CHANGE_BADMODE"))
TVP_MSG_DECL_CONST(TVPChangeDisplaySettingsFailedDispChangeNotUpdated, TJS_W("ChangeDisplaySettings failed: DISP_CHANGE_NOTUPDATED"))
TVP_MSG_DECL_CONST(TVPChangeDisplaySettingsFailedUnknownReason, TJS_W("ChangeDisplaySettings failed: unknown reason (%1)"))
TVP_MSG_DECL_CONST(TVPFailedToCreateScreenDC, TJS_W("Failed to create screen DC"))
TVP_MSG_DECL_CONST(TVPFailedToCreateOffscreenBitmap, TJS_W("Failed to create offscreen bitmap"))
TVP_MSG_DECL_CONST(TVPFailedToCreateOffscreenDC, TJS_W("Failed to create offscreen DC"))
TVP_MSG_DECL_CONST(TVPInfoSusiePluginInfo, TJS_W("(info) Susie plugin info : %1"))
TVP_MSG_DECL_CONST(TVPSusiePluginUnsupportedBitmapHeader, TJS_W("Non-supported bitmap header was given from susie plug-in."))
TVP_MSG_DECL_CONST(TVPBasicDrawDeviceFailedToCreateDirect3DDevice, TJS_W("BasicDrawDevice: Failed to create Direct3D Device: %1"))
TVP_MSG_DECL_CONST(TVPBasicDrawDeviceFailedToCreateDirect3DDeviceUnknownReason, TJS_W("BasicDrawDevice: Failed to create Direct3D Device: unknown reason"))
TVP_MSG_DECL_CONST(TVPCouldNotCreateAnyDrawDevice, TJS_W("Fatal: Could not create any drawer objects."))
TVP_MSG_DECL_CONST(TVPBasicDrawDeviceDoesNotSupporteLayerManagerMoreThanOne, TJS_W("\"basic draw\" device does not support layer manager more than 1"))
TVP_MSG_DECL_CONST(TVPInvalidVideoSize, TJS_W("Invalid video size"))
TVP_MSG_DECL_CONST(TVPRoughVsyncIntervalReadFromApi, TJS_W("Rough VSync interval read from API : %1"))
TVP_MSG_DECL_CONST(TVPRoughVsyncIntervalStillSeemsWrong, TJS_W("Rough VSync interval still seems wrong, assuming default value (16)"))
TVP_MSG_DECL_CONST(TVPInfoFoundDirect3DInterface, TJS_W("(info) IDirect3D9 or higher detected. Retrieving current Direct3D driver information..."))
TVP_MSG_DECL_CONST(TVPInfoFaild, TJS_W("(info) Failed."))
TVP_MSG_DECL_CONST(TVPInfoDirect3D, TJS_W("(info) Loading Direct3D ..."))
TVP_MSG_DECL_CONST(TVPCannotLoadD3DDLL, TJS_W("Cannot load d3d9.dll"))
TVP_MSG_DECL_CONST(TVPNotFoundDirect3DCreate, TJS_W("Missing Direct3DCreate9 in d3d9.dll"))
TVP_MSG_DECL_CONST(TVPInfoEnvironmentUsing, TJS_W("(info) environment: using %1"))
TVP_MSG_DECL_CONST(TVPInfoSearchBestFullscreenResolution, TJS_W("(info) Searching best fullscreen resolution ..."))
TVP_MSG_DECL_CONST(TVPInfoConditionPreferredScreenMode, TJS_W("(info) condition: preferred screen mode: %1"))
TVP_MSG_DECL_CONST(TVPInfoConditionMode, TJS_W("(info) condition: mode: %1"))
TVP_MSG_DECL_CONST(TVPInfoConditionZoomMode, TJS_W("(info) condition: zoom mode: %1"))
TVP_MSG_DECL_CONST(TVPInfoEnvironmentDefaultScreenMode, TJS_W("(info) environment: default screen mode: %1"))
TVP_MSG_DECL_CONST(TVPInfoEnvironmentDefaultScreenAspectRatio, TJS_W("(info) environment: default screen aspect ratio: %1 : %2"))
TVP_MSG_DECL_CONST(TVPInfoEnvironmentAvailableDisplayModes, TJS_W("(info) environment: available display modes:"))
TVP_MSG_DECL_CONST(TVPInfoNotFoundScreenModeFromDriver, TJS_W("(info) Panic! There is no reasonable candidate screen mode provided from the driver ... trying to use the default screen size and color depth ..."))
TVP_MSG_DECL_CONST(TVPInfoResultCandidates, TJS_W("(info) result: candidates:"))
TVP_MSG_DECL_CONST(TVPInfoTryScreenMode, TJS_W("(info) Trying screen mode: %1"))
TVP_MSG_DECL_CONST(TVPAllScreenModeError, TJS_W("All screen mode has been tested, but no modes available at all."))
TVP_MSG_DECL_CONST(TVPInfoChangeScreenModeSuccess, TJS_W("(info) Changing screen mode succeeded"))
TVP_MSG_DECL_CONST(TVPSelectXP3FileOrFolder, TJS_W("Select XP3 file or folder"))
TVP_MSG_DECL_CONST(TVPD3dErrDeviceLost, TJS_W("D3D : The device has been lost but cannot be reset at this time."))
TVP_MSG_DECL_CONST(TVPD3dErrDriverIinternalError, TJS_W("D3D : Internal driver error. Applications should destroy and recreate the device when receiving this error. "))
TVP_MSG_DECL_CONST(TVPD3dErrInvalidCall, TJS_W("D3D : The method call is invalid. For example, a method's parameter may not be a valid pointer."))
TVP_MSG_DECL_CONST(TVPD3dErrOutOfVideoMemory, TJS_W("D3D : Direct3D does not have enough display memory to perform the operation. "))
TVP_MSG_DECL_CONST(TVPD3dErrOutOfMemory, TJS_W("D3D : Direct3D could not allocate sufficient memory to complete the call."))
TVP_MSG_DECL_CONST(TVPD3dErrWrongTextureFormat, TJS_W("D3D : The pixel format of the texture surface is not valid."))
TVP_MSG_DECL_CONST(TVPD3dErrUnsuportedColorOperation, TJS_W("D3D : The device does not support a specified texture-blending operation for color values."))
TVP_MSG_DECL_CONST(TVPD3dErrUnsuportedColorArg, TJS_W("D3D : The device does not support a specified texture-blending argument for color values."))
TVP_MSG_DECL_CONST(TVPD3dErrUnsuportedAalphtOperation, TJS_W("D3D : The device does not support a specified texture-blending operation for the alpha channel."))
TVP_MSG_DECL_CONST(TVPD3dErrUnsuportedAlphaArg, TJS_W("D3D : The device does not support a specified texture-blending argument for the alpha channel."))
TVP_MSG_DECL_CONST(TVPD3dErrTooManyOperations, TJS_W("D3D : The application is requesting more texture-filtering operations than the device supports."))
TVP_MSG_DECL_CONST(TVPD3dErrConflictioningTextureFilter, TJS_W("D3D : The current texture filters cannot be used together."))
TVP_MSG_DECL_CONST(TVPD3dErrUnsuportedFactorValue, TJS_W("D3D : The device does not support the specified texture factor value. Not used; provided only to support older drivers."))
TVP_MSG_DECL_CONST(TVPD3dErrConflictioningRenderState, TJS_W("D3D : The currently set render states cannot be used together."))
TVP_MSG_DECL_CONST(TVPD3dErrUnsupportedTextureFilter, TJS_W("D3D : The device does not support the specified texture filter."))
TVP_MSG_DECL_CONST(TVPD3dErrConflictioningTexturePalette, TJS_W("D3D : The current textures cannot be used simultaneously."))
TVP_MSG_DECL_CONST(TVPD3dErrNotFound, TJS_W("D3D : The requested item was not found."))
TVP_MSG_DECL_CONST(TVPD3dErrMoreData, TJS_W("D3D : There is more data available than the specified buffer size can hold."))
TVP_MSG_DECL_CONST(TVPD3dErrDeviceNotReset, TJS_W("D3D : The device has been lost but can be reset at this time."))
TVP_MSG_DECL_CONST(TVPD3dErrNotAvailable, TJS_W("D3D : This device does not support the queried technique."))
TVP_MSG_DECL_CONST(TVPD3dErrInvalidDevice, TJS_W("D3D : The requested device type is not valid."))
TVP_MSG_DECL_CONST(TVPD3dErrDriverInvalidCall, TJS_W("D3D : Not used."))
TVP_MSG_DECL_CONST(TVPD3dErrWasStillDrawing, TJS_W("D3D : The previous blit operation that is transferring information to or from this surface is incomplete."))
TVP_MSG_DECL_CONST(TVPD3dErrDeviceHung, TJS_W("D3D : The device that returned this code caused the hardware adapter to be reset by the OS."))
TVP_MSG_DECL_CONST(TVPD3dErrUnsupportedOverlay, TJS_W("D3D : The device does not support overlay for the specified size or display mode. "))
TVP_MSG_DECL_CONST(TVPD3dErrUnsupportedOverlayFormat, TJS_W("D3D : The device does not support overlay for the specified surface format. "))
TVP_MSG_DECL_CONST(TVPD3dErrCannotProtectContent, TJS_W("D3D : The specified content cannot be protected."))
TVP_MSG_DECL_CONST(TVPD3dErrUnsupportedCrypto, TJS_W("D3D : The specified cryptographic algorithm is not supported."))
TVP_MSG_DECL_CONST(TVPD3dErrPresentStatisticsDisJoint, TJS_W("D3D : The present statistics have no orderly sequence."))
TVP_MSG_DECL_CONST(TVPD3dErrDeviceRemoved, TJS_W("D3D : The hardware adapter has been removed."))
TVP_MSG_DECL_CONST(TVPD3dOkNoAutoGen, TJS_W("D3D : This is a success code. However, the autogeneration of mipmaps is not supported for this format."))
TVP_MSG_DECL_CONST(TVPD3dErrFail, TJS_W("D3D : An undetermined error occurred inside the Direct3D subsystem."))
TVP_MSG_DECL_CONST(TVPD3dErrInvalidArg, TJS_W("D3D : An invalid parameter was passed to the returning function."))
TVP_MSG_DECL_CONST(TVPD3dUnknownError, TJS_W("D3D : Unknown error."))
TVP_MSG_DECL_CONST(TVPExceptionAccessViolation, TJS_W("Access Violation: The thread attempts to read from or write to a virtual address for which it does not have access."))
TVP_MSG_DECL_CONST(TVPExceptionBreakpoint, TJS_W("Break Point: A breakpoint is encountered."))
TVP_MSG_DECL_CONST(TVPExceptionDatatypeMisalignment, TJS_W("Data Type Misalignment: The thread attempts to read or write data that is misaligned on hardware that does not provide alignment. For example, 16-bit values must be aligned on 2-byte boundaries, 32-bit values on 4-byte boundaries, and so on."))
TVP_MSG_DECL_CONST(TVPExceptionSingleStep, TJS_W("Single Step: A trace trap or other single instruction mechanism signals that one instruction is executed."))
TVP_MSG_DECL_CONST(TVPExceptionArrayBoundsExceeded, TJS_W("Array Bounds Exceede: The thread attempts to access an array element that is out of bounds, and the underlying hardware supports bounds checking."))
TVP_MSG_DECL_CONST(TVPExceptionFltDenormalOperand, TJS_W("Denormal Operand: One of the operands in a floating point operation is denormal. A denormal value is one that is too small to represent as a standard floating point value."))
TVP_MSG_DECL_CONST(TVPExceptionFltDivideByZero, TJS_W("Divide By Zero: The thread attempts to divide a floating point value by a floating point divisor of 0 (zero)."))
TVP_MSG_DECL_CONST(TVPExceptionFltInexactResult, TJS_W("Inexact Result: The result of a floating point operation cannot be represented exactly as a decimal fraction."))
TVP_MSG_DECL_CONST(TVPExceptionFltInvalidOperation, TJS_W("Invalid Operation: A floating point exception that is not included in this list."))
TVP_MSG_DECL_CONST(TVPExceptionFltOverflow, TJS_W("Overflow: The exponent of a floating point operation is greater than the magnitude allowed by the corresponding type."))
TVP_MSG_DECL_CONST(TVPExceptionFltStackCheck, TJS_W("Stack Check: The stack has overflowed or underflowed, because of a floating point operation."))
TVP_MSG_DECL_CONST(TVPExceptionFltUnderflow, TJS_W("Underflow: The exponent of a floating point operation is less than the magnitude allowed by the corresponding type."))
TVP_MSG_DECL_CONST(TVPExceptionIntDivideByZero, TJS_W("Divide By Zero: The thread attempts to divide an integer value by an integer divisor of 0 (zero)."))
TVP_MSG_DECL_CONST(TVPExceptionIntOverflow, TJS_W("Overflow: The result of an integer operation creates a value that is too large to be held by the destination register. In some cases, this will result in a carry out of the most significant bit of the result. Some operations do not set the carry flag."))
TVP_MSG_DECL_CONST(TVPExceptionPrivInstruction, TJS_W("Priv Instruction: The thread attempts to execute an instruction with an operation that is not allowed in the current computer mode."))
TVP_MSG_DECL_CONST(TVPExceptionNoncontinuableException, TJS_W("Noncontinuable Exception: The thread attempts to continue execution after a non-continuable exception occurs."))
TVP_MSG_DECL_CONST(TVPExceptionGuardPage, TJS_W("Guard Page: The thread accessed memory allocated with the PAGE_GUARD modifier."))
TVP_MSG_DECL_CONST(TVPExceptionIllegalInstruction, TJS_W("Illegal Instruction: The thread tries to execute an invalid instruction."))
TVP_MSG_DECL_CONST(TVPExceptionInPageError, TJS_W("In Page Error: The thread tries to access a page that is not present, and the system is unable to load the page. For example, this exception might occur if a network connection is lost while running a program over a network."))
TVP_MSG_DECL_CONST(TVPExceptionInvalidDisposition, TJS_W("Invalid Disposition: An exception handler returns an invalid disposition to the exception dispatcher. Programmers using a high-level language such as C should never encounter this exception."))
TVP_MSG_DECL_CONST(TVPExceptionInvalidHandle, TJS_W("Invalid Handle: The thread used a handle to a kernel object that was invalid (probably because it had been closed.)"))
TVP_MSG_DECL_CONST(TVPExceptionStackOverflow, TJS_W("Stack Overflow: The thread uses up its stack."))
TVP_MSG_DECL_CONST(TVPExceptionUnwindCconsolidate, TJS_W("Unwind Consolidate: A frame consolidation has been executed."))
TVP_MSG_DECL_CONST(TVPCannotShowModalAreadyShowed, TJS_W("Cannot Show Modal."))
TVP_MSG_DECL_CONST(TVPCannotShowModalSingleWindow, TJS_W("Cannot Show Modal. When it is single window."))
#endif
