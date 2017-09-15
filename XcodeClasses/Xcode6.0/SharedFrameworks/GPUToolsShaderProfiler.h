//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct DYShaderProfilerTiming {
    struct Statistics _cycle;
    struct Statistics _time;
    struct Statistics _percentage;
};

struct Statistics {
    double average;
    double min;
    double max;
};

struct __hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>;

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/SharedFrameworks/GPUToolsShaderProfiler.framework/Versions/A/GPUToolsShaderProfiler
// UUID: 73E204E8-7F28-3FC6-9B1E-37EF01CA8E26
//
//                           Arch: x86_64
//                Current version: 16097.0.0
//          Compatibility version: 1.0.0
//                 Source version: 16097.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@interface DYShaderAnalyzer : NSObject
{
}

+ (BOOL)isDisassemblerAvailable;
+ (BOOL)supportRendererType:(int)arg1;
- (id)disassembleBinary:(id)arg1;
- (id)analyzeFragmentBinary:(id)arg1 uscSamples:(id)arg2;
- (id)analyzeVertexBinary:(id)arg1 uscSamples:(id)arg2;
- (id)analyzeBinary:(id)arg1 uscSamples:(id)arg2;

@end

@interface DYShaderAnalyzerResult : NSObject <NSCoding, NSCopying>
{
    double _instructionCount;
    double _instructionCountMin;
    double _instructionCountMax;
    double _totalCost;
    NSDictionary *_totalPerLineCost;
    NSDictionary *_drawCallCost;
    NSDictionary *_drawCallPerLineCost;
    NSDictionary *_perFileCost;
}

@property(retain, nonatomic) NSDictionary *perFileCost; // @synthesize perFileCost=_perFileCost;
@property(retain, nonatomic) NSDictionary *drawCallPerLineCost; // @synthesize drawCallPerLineCost=_drawCallPerLineCost;
@property(retain, nonatomic) NSDictionary *drawCallCost; // @synthesize drawCallCost=_drawCallCost;
@property(retain, nonatomic) NSDictionary *totalPerLineCost; // @synthesize totalPerLineCost=_totalPerLineCost;
@property(nonatomic) double totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) double instructionCountMax; // @synthesize instructionCountMax=_instructionCountMax;
@property(nonatomic) double instructionCountMin; // @synthesize instructionCountMin=_instructionCountMin;
@property(nonatomic) double instructionCount; // @synthesize instructionCount=_instructionCount;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface DYShaderProfiler : NSObject
{
    id <DYShaderProfilerDelegate> _delegate;
    struct dispatch_queue_s *_queue;
    DYShaderAnalyzer *_shaderAnalyzer;
    int _pendingRequestLock;
    unsigned int _pendingRequest;
}

+ (void)removeTemporaryDirectory;
+ (id)temporaryDirectory;
+ (BOOL)isDisassemblerAvailable;
+ (BOOL)isFramebufferFetchWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderBeginWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderEndWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
@property(readonly, nonatomic) __weak id <DYShaderProfilerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)calculateUtilizations:(id)arg1 result:(id)arg2;
- (void)calculateFrameTime:(id)arg1 result:(id)arg2;
- (BOOL)isDeviceSupported;
- (BOOL)_isAlwaysEnabled;
- (id)profileShader:(id)arg1;
- (void)initializeShaderAnalyzer;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

@interface DYShaderProfilerDrawCallInfo : NSObject <NSCoding, NSCopying>
{
    NSString *_vertexShaderKey;
    NSString *_fragmentShaderKey;
    NSString *_computeKernelKey;
    struct DYShaderProfilerTiming _vertexTiming;
    struct DYShaderProfilerTiming _fragmentTiming;
    struct DYShaderProfilerTiming _computeTiming;
    struct DYShaderProfilerTiming _timing;
    BOOL _fragmentShaderWriteDepth;
    BOOL _fragmentShaderUseDiscard;
    BOOL _blendingIsEnabled;
    unsigned int _drawCallIndex;
    unsigned int _functionIndex;
    unsigned int _vertexCount;
    unsigned int _fragmentCount;
    unsigned int _instanceCount;
    DYShaderProfilerProgramInfo *_programInfo;
    double _vertexCountPercentage;
    double _fragmentCountPercentage;
    double _instanceCountPercentage;
}

@property(readonly, nonatomic) struct DYShaderProfilerTiming timing; // @synthesize timing=_timing;
@property(nonatomic) BOOL blendingIsEnabled; // @synthesize blendingIsEnabled=_blendingIsEnabled;
@property(nonatomic) BOOL fragmentShaderUseDiscard; // @synthesize fragmentShaderUseDiscard=_fragmentShaderUseDiscard;
@property(nonatomic) BOOL fragmentShaderWriteDepth; // @synthesize fragmentShaderWriteDepth=_fragmentShaderWriteDepth;
@property(nonatomic) double instanceCountPercentage; // @synthesize instanceCountPercentage=_instanceCountPercentage;
@property(nonatomic) unsigned int instanceCount; // @synthesize instanceCount=_instanceCount;
@property(readonly, nonatomic) struct DYShaderProfilerTiming computeTiming; // @synthesize computeTiming=_computeTiming;
@property(readonly, nonatomic) struct DYShaderProfilerTiming fragmentTiming; // @synthesize fragmentTiming=_fragmentTiming;
@property(nonatomic) double fragmentCountPercentage; // @synthesize fragmentCountPercentage=_fragmentCountPercentage;
@property(nonatomic) unsigned int fragmentCount; // @synthesize fragmentCount=_fragmentCount;
@property(readonly, nonatomic) struct DYShaderProfilerTiming vertexTiming; // @synthesize vertexTiming=_vertexTiming;
@property(nonatomic) double vertexCountPercentage; // @synthesize vertexCountPercentage=_vertexCountPercentage;
@property(nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(retain, nonatomic) DYShaderProfilerProgramInfo *programInfo; // @synthesize programInfo=_programInfo;
@property(nonatomic) unsigned int functionIndex; // @synthesize functionIndex=_functionIndex;
@property(nonatomic) unsigned int drawCallIndex; // @synthesize drawCallIndex=_drawCallIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface DYShaderProfilerProgramInfo : NSObject <NSCoding, NSCopying>
{
    struct DYShaderProfilerTiming _timing;
    BOOL _valid;
    BOOL _separable;
    unsigned int _programIndex;
    unsigned int _vertexCount;
    unsigned int _fragmentCount;
    unsigned int _instanceCount;
    unsigned long long _programId;
    NSMutableArray *_drawCallInfoIndices;
    double _vertexCountPercentage;
    double _fragmentCountPercentage;
    double _instanceCountPercentage;
    DYShaderProfilerShaderInfo *_vertexShaderInfo;
    DYShaderProfilerShaderInfo *_fragmentShaderInfo;
    DYShaderProfilerShaderInfo *_computeProgramInfo;
    unsigned long long _vertexProgramId;
    unsigned long long _fragmentProgramId;
    unsigned long long _computeProgramId;
}

@property(nonatomic) unsigned long long computeProgramId; // @synthesize computeProgramId=_computeProgramId;
@property(nonatomic) unsigned long long fragmentProgramId; // @synthesize fragmentProgramId=_fragmentProgramId;
@property(nonatomic) unsigned long long vertexProgramId; // @synthesize vertexProgramId=_vertexProgramId;
@property(nonatomic) BOOL separable; // @synthesize separable=_separable;
@property(retain, nonatomic) DYShaderProfilerShaderInfo *computeProgramInfo; // @synthesize computeProgramInfo=_computeProgramInfo;
@property(retain, nonatomic) DYShaderProfilerShaderInfo *fragmentShaderInfo; // @synthesize fragmentShaderInfo=_fragmentShaderInfo;
@property(retain, nonatomic) DYShaderProfilerShaderInfo *vertexShaderInfo; // @synthesize vertexShaderInfo=_vertexShaderInfo;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) struct DYShaderProfilerTiming timing; // @synthesize timing=_timing;
@property(nonatomic) double instanceCountPercentage; // @synthesize instanceCountPercentage=_instanceCountPercentage;
@property(nonatomic) unsigned int instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) double fragmentCountPercentage; // @synthesize fragmentCountPercentage=_fragmentCountPercentage;
@property(nonatomic) unsigned int fragmentCount; // @synthesize fragmentCount=_fragmentCount;
@property(nonatomic) double vertexCountPercentage; // @synthesize vertexCountPercentage=_vertexCountPercentage;
@property(nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(retain, nonatomic) NSMutableArray *drawCallInfoIndices; // @synthesize drawCallInfoIndices=_drawCallInfoIndices;
@property(nonatomic) unsigned long long programId; // @synthesize programId=_programId;
@property(nonatomic) unsigned int programIndex; // @synthesize programIndex=_programIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) BOOL isFragmentShaderMostExpensive; // @dynamic isFragmentShaderMostExpensive;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface DYShaderProfilerResult : NSObject <NSCoding, NSCopying>
{
    struct DYShaderProfilerTiming _vertexTiming;
    struct DYShaderProfilerTiming _fragmentTiming;
    struct DYShaderProfilerTiming _computeTiming;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _drawCallInfoIndexMap;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _programInfoIndexMap;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _programPipelineInfoIndexMap;
    NSMutableDictionary *_vertexShaderBinaryInfo;
    NSMutableDictionary *_fragmentShaderBinaryInfo;
    NSMutableDictionary *_computeKernelBinaryInfo;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _perContextDrawCallCounterMap;
    unsigned int _vertexCount;
    unsigned int _fragmentCount;
    unsigned int _instanceCount;
    unsigned int _deviceUtilization;
    unsigned int _tilerUtilization;
    unsigned int _rendererUtilization;
    NSMutableArray *_drawCallInfoList;
    NSMutableArray *_programInfoList;
    NSMutableArray *_programPipelineInfoList;
    unsigned long long _frameTime;
    double _gpuTime;
}

@property(nonatomic) double gpuTime; // @synthesize gpuTime=_gpuTime;
@property(nonatomic) unsigned int rendererUtilization; // @synthesize rendererUtilization=_rendererUtilization;
@property(nonatomic) unsigned int tilerUtilization; // @synthesize tilerUtilization=_tilerUtilization;
@property(nonatomic) unsigned int deviceUtilization; // @synthesize deviceUtilization=_deviceUtilization;
@property(nonatomic) unsigned long long frameTime; // @synthesize frameTime=_frameTime;
@property(nonatomic) unsigned int instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) struct DYShaderProfilerTiming computeTiming; // @synthesize computeTiming=_computeTiming;
@property(nonatomic) struct DYShaderProfilerTiming fragmentTiming; // @synthesize fragmentTiming=_fragmentTiming;
@property(nonatomic) unsigned int fragmentCount; // @synthesize fragmentCount=_fragmentCount;
@property(nonatomic) struct DYShaderProfilerTiming vertexTiming; // @synthesize vertexTiming=_vertexTiming;
@property(nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(retain, nonatomic) NSMutableArray *programPipelineInfoList; // @synthesize programPipelineInfoList=_programPipelineInfoList;
@property(retain, nonatomic) NSMutableArray *programInfoList; // @synthesize programInfoList=_programInfoList;
@property(retain, nonatomic) NSMutableArray *drawCallInfoList; // @synthesize drawCallInfoList=_drawCallInfoList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)perLineInfoForProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2 fragShader:(BOOL)arg3 totalCost:(BOOL)arg4;
- (id)shaderSourceForProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2;
- (id)_drawCallInfoWithProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2;
- (void)calculateRealTimeInfoWithGPUTime:(double)arg1;
- (id)programPipelineInfoWithId:(unsigned long long)arg1;
- (id)programInfoWithId:(unsigned long long)arg1;
- (id)drawCallInfoWithFunctionIndex:(unsigned int)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface DYShaderProfilerShaderInfo : NSObject <NSCoding, NSCopying>
{
    struct DYShaderProfilerTiming _timing;
    NSString *_source;
}

@property(readonly, nonatomic) struct DYShaderProfilerTiming timing; // @synthesize timing=_timing;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface ShaderBinaryInfo : NSObject <NSCoding, NSCopying>
{
    NSData *_binary;
    NSMutableData *_uscSamples;
    NSString *_disassembly;
    DYShaderAnalyzerResult *_analyzerResult;
}

@property(retain, nonatomic) DYShaderAnalyzerResult *analyzerResult; // @synthesize analyzerResult=_analyzerResult;
@property(retain, nonatomic) NSString *disassembly; // @synthesize disassembly=_disassembly;
@property(retain, nonatomic) NSMutableData *uscSamples; // @synthesize uscSamples=_uscSamples;
@property(retain, nonatomic) NSData *binary; // @synthesize binary=_binary;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

