#include<cuda_runtime_api.h>
#include "cuda_helper/helper_cuda.h"
#include "VoxelDataStructures.h"

extern "C" void updateConstantHashTableParams(const HashTableParams&);
extern "C" __host__ void deviceAllocate(const HashTableParams&);
extern "C" __host__ void deviceFree();
extern "C" __host__ void resetHashTableMutexes(const HashTableParams&);
extern "C" __host__ void allocBlocks(const float4*, const float4*);
extern "C" __host__ int flattenIntoBuffer(const HashTableParams&);
extern "C" __host__ void calculateKinectProjectionMatrix();
extern "C" __host__ void integrateDepthMap(const HashTableParams&, const float4*);
extern "C" __host__ void mapGLobjectsToCUDApointers(cudaGraphicsResource*, cudaGraphicsResource*, cudaGraphicsResource*);