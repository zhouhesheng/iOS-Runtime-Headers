/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLComputePipelineState>, <MTLDevice>, MTLDebugFunctionArgument;

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    MTLDebugFunctionArgument *_buffers[31];
    <MTLDevice> *_cachedDevice;
    <MTLComputePipelineState> *_computePipelineState;
    MTLDebugFunctionArgument *_samplers[16];
    MTLDebugFunctionArgument *_textures[31];
    MTLDebugFunctionArgument *_threadgroupMemoryLengths[31];
    boolcanDealloc;
    boolcanEndEncoding;
    boolcanSetComputePipelineState;
    boolhasEndEncoding;
    boolhasSetComputePipelineState;
}

@property(readonly) <MTLDevice> * cachedDevice;
@property(readonly) <MTLComputePipelineState> * computePipelineState;

- (void).cxx_destruct;
- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (id)cachedDevice;
- (id)computePipelineState;
- (void)dealloc;
- (id)description;
- (void)dispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)endEncoding;
- (void)executeBarrier;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end
