/// This file is auto-generated by command "python3 tools/autogen/gen.py -s platforms/cudla/hal/include/xsched/cudla/hal/cudla.h -f cudla -p cudla"
#pragma once

#include "xsched/protocol/def.h"
#include "xsched/utils/common.h"
#include "xsched/utils/symbol.h"
#include "xsched/utils/function.h"
#include "xsched/cudla/hal/cudla.h"
#include "xsched/cudla/hal/cudart.h"

namespace xsched::cudla
{

class DlaDriver
{
private:
    DEFINE_GET_SYMBOL_FUNC(GetSymbol, XSCHED_CUDLA_LIB_ENV_NAME,
                           std::vector<std::string>({"libcudla.so"}), // search name
                           std::vector<std::string>({"/usr/local/cuda/lib64"})); // search path

public:
    STATIC_CLASS(DlaDriver);

    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaGetVersion"), cudlaStatus, GetVersion, uint64_t *const, version);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaDeviceGetCount"), cudlaStatus, DeviceGetCount, uint64_t *const, pNumDevices);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaCreateDevice"), cudlaStatus, CreateDevice, const uint64_t, device, cudlaDevHandle *const, devHandle, const uint32_t, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaMemRegister"), cudlaStatus, MemRegister, const cudlaDevHandle, devHandle, const uint64_t *const, ptr, const size_t, size, uint64_t **const, devPtr, const uint32_t, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaModuleLoadFromMemory"), cudlaStatus, ModuleLoadFromMemory, const cudlaDevHandle, devHandle, const uint8_t *const, pModule, const size_t, moduleSize, cudlaModule *const, hModule, const uint32_t, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaModuleGetAttributes"), cudlaStatus, ModuleGetAttributes, const cudlaModule, hModule, const cudlaModuleAttributeType, attrType, cudlaModuleAttribute *const, attribute);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaModuleUnload"), cudlaStatus, ModuleUnload, const cudlaModule, hModule, const uint32_t, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaSubmitTask"), cudlaStatus, SubmitTask, const cudlaDevHandle, devHandle, const cudlaTask *const, ptrToTasks, const uint32_t, numTasks, void *const, stream, const uint32_t, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaDeviceGetAttribute"), cudlaStatus, DeviceGetAttribute, const cudlaDevHandle, devHandle, const cudlaDevAttributeType, attrib, cudlaDevAttribute *const, pAttribute);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaMemUnregister"), cudlaStatus, MemUnregister, const cudlaDevHandle, devHandle, const uint64_t *const, devPtr);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaGetLastError"), cudlaStatus, GetLastError, const cudlaDevHandle, devHandle);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaDestroyDevice"), cudlaStatus, DestroyDevice, const cudlaDevHandle, devHandle);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaImportExternalMemory"), cudlaStatus, ImportExternalMemory, const cudlaDevHandle, devHandle, const cudlaExternalMemoryHandleDesc *const, desc, uint64_t **const, devPtr, const uint32_t, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaGetNvSciSyncAttributes"), cudlaStatus, GetNvSciSyncAttributes, uint64_t *, attrList, const uint32_t, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaImportExternalSemaphore"), cudlaStatus, ImportExternalSemaphore, const cudlaDevHandle, devHandle, const cudlaExternalSemaphoreHandleDesc *const, desc, uint64_t **const, devPtr, const uint32_t, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudlaSetTaskTimeoutInMs"), cudlaStatus, SetTaskTimeoutInMs, const cudlaDevHandle, devHandle, const uint32_t, timeout);

};

/// auto-generated by command "python3 tools/autogen/gen.py -s /usr/local/cuda/include/cuda_runtime.h -I /usr/local/cuda/include -f cuda -p cuda"
class RtDriver
{
private:
    DEFINE_GET_SYMBOL_FUNC(GetSymbol, XSCHED_CUDART_LIB_ENV_NAME,
                           std::vector<std::string>({"libcudart.so"}), // search name
                           std::vector<std::string>({"/usr/local/cuda/lib64"})); // search path

public:
    STATIC_CLASS(RtDriver);

    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaMemcpyAsync"), cudaError_t, MemcpyAsync, void *, dst, const void *, src, size_t, count, enum cudaMemcpyKind, kind, cudaStream_t, stream);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaStreamCreate"), cudaError_t, StreamCreate, cudaStream_t *, pStream);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaStreamCreateWithFlags"), cudaError_t, StreamCreateWithFlags, cudaStream_t *, pStream, unsigned int, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaStreamDestroy"), cudaError_t, StreamDestroy, cudaStream_t, stream);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaStreamSynchronize"), cudaError_t, StreamSynchronize, cudaStream_t, stream);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaEventCreateWithFlags"), cudaError_t, EventCreateWithFlags, cudaEvent_t *, event, unsigned int, flags);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaEventDestroy"), cudaError_t, EventDestroy, cudaEvent_t, event);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaEventRecord"), cudaError_t, EventRecord, cudaEvent_t, event, cudaStream_t, stream);
    DEFINE_STATIC_ADDRESS_CALL(GetSymbol("cudaEventSynchronize"), cudaError_t, EventSynchronize, cudaEvent_t, event);

};

} // namespace xsched::cudla
