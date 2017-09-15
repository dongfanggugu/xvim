//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct FSEventStreamContext {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
};

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/OtherFrameworks/DevToolsFoundation.framework/Versions/A/DevToolsFoundation
// UUID: 6F92D2F8-0A77-370B-8CE1-9C24FDEF36C3
//
//                           Arch: x86_64
//                Current version: 5000.1.0
//          Compatibility version: 1.0.0
//                 Source version: 5000.1.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol DTAssertionHandling <NSObject>
- (void)handleFailureInFunction:(NSString *)arg1 fileName:(NSString *)arg2 lineNumber:(long long)arg3 messageFormat:(NSString *)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 fileName:(NSString *)arg3 lineNumber:(long long)arg4 messageFormat:(NSString *)arg5 arguments:(struct __va_list_tag [1])arg6;
@end

@protocol DTOutputStreams <NSObject>
- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
@end

@protocol DTPlugInXMLConfiguration
- (NSXMLElement *)element;
- (void)setElement:(NSXMLElement *)arg1;
- (void)finishConfigurationWithElement:(NSXMLElement *)arg1;
- (void)configureWithElement:(NSXMLElement *)arg1;
@end

@protocol NSLocking
- (void)unlock;
- (void)lock;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@interface DTActivationRule : NSObject <DTPlugInXMLConfiguration>
{
    NSString *_kind;
    NSString *_identifier;
    NSString *_versionString;
    NSPredicate *_query;
}

+ (long long)integerValueForVersionString:(id)arg1;
+ (id)keyPathsForKeysAffectingPredicate;
@property(copy) NSPredicate *query; // @synthesize query=_query;
@property(copy) NSString *versionString; // @synthesize versionString=_versionString;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *kind; // @synthesize kind=_kind;
- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (void)setElement:(id)arg1;
- (id)element;
@property(readonly) NSPredicate *predicate;
- (void)dealloc;
- (id)_predicateWithIdentifier:(id)arg1 versionString:(id)arg2 query:(id)arg3;

@end

@interface DTAssertionHandler : NSObject <DTAssertionHandling>
{
}

+ (void)setCurrentHandler:(id)arg1 forThread:(id)arg2;
+ (id)currentHandlerForThread:(id)arg1;
+ (void)setCurrentHandler:(id)arg1;
+ (id)currentHandler;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;
- (void)handleFailureInFunction:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 messageFormat:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 fileName:(id)arg3 lineNumber:(long long)arg4 messageFormat:(id)arg5 arguments:(struct __va_list_tag [1])arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface DTOutputStream : NSObject <DTOutputStreams>
{
}

- (void)writeData:(id)arg1;
- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface DTFilterOutputStream : DTOutputStream
{
    id <DTOutputStreams> _nextOutputStream;
}

- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)lastOutputStream;
- (void)setNextOutputStream:(id)arg1;
- (id)nextOutputStream;
- (void)dealloc;
- (id)init;
- (id)initWithNextOutputStream:(id)arg1;

@end

@interface DTDataOutputStream : DTFilterOutputStream
{
}

- (void)printf:(const char *)arg1;

@end

@interface DTDeveloperPaths : NSObject
{
    NSMutableDictionary *_pathCache;
}

+ (id)defaultPaths;
- (id)_developerUsrPath;
- (id)_developerFolderPath;
- (id)_pathForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 forVersionPathComponent:(id)arg3;
- (void)_setValidDomains:(unsigned long long)arg1;
- (unsigned long long)_validDomains;
- (id)description;
- (id)searchPathsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 forToolsVersions:(id)arg3 includingUnversionedLocations:(BOOL)arg4;
- (id)searchPathsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)preferredUnversionedPathForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)preferredPathForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 forToolsVersion:(id)arg3;
- (id)developerPathForDirectory:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDeveloperDirPath:(id)arg1 developerUsrPath:(id)arg2 validDomains:(unsigned long long)arg3;
- (id)initWithDeveloperDirPath:(id)arg1 developerUsrPath:(id)arg2;
- (id)init;

@end

@interface DTExtension : NSObject
{
    id _extensionData;
    DTPlugInManager *_plugInManager;
    id _realExtension;
    unsigned int _extensionFlags;
    void *_reserved[3];
}

- (void)didAccessValueForKey:(id)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (id)primitiveValueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)extensionElement;
- (id)derivedExtensions;
- (id)basedOnExtension;
- (id)extensionPoint;
- (id)plugIn;
- (BOOL)isValid;
- (id)bundle;
- (id)name;
- (id)version;
- (id)identifier;
- (id)extensionData;
- (void)dealloc;
- (id)initWithExtensionData:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)_realExtension;
- (void)_fireExtensionFault;
- (BOOL)_isExtensionFault;
- (id)_initWithExtensionDescription:(id)arg1 plugInManager:(id)arg2 isExtensionFault:(BOOL)arg3;

@end

@interface DTExtensionAccessStrategy : NSObject
{
}

+ (id)faultReplacingKeyValueCodingAccessStrategy;
+ (id)faultPrimitiveKeyValueCodingAccessStrategy;
+ (id)superclassKeyValueCodingAccessStrategy;
+ (id)primitiveKeyValueCodingAccessStrategy;
+ (id)keyValueCodingAccessStrategy;
- (id)extensionAfterFiringPotentialFault:(id)arg1;
- (id)valueForKey:(id)arg1 ofExtension:(id)arg2 withDescription:(id)arg3;
- (BOOL)shouldReplaceStrategyForFaultState:(BOOL)arg1;

@end

@interface DTModelObjectDescription : NSManagedObject <DTPlugInXMLConfiguration>
{
    NSMutableArray *_activationRules;
}

- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (void)setElement:(id)arg1;
- (id)element;
- (id)activationRulesForKind:(id)arg1;
- (id)activationRules;
- (BOOL)activated;
- (void)setActivated:(BOOL)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)didTurnIntoFault;
- (void)willSave;
- (void)awakeFromFetch;
- (id)_filterPredicateForKind:(id)arg1;
- (void)_parseActivationRules;
- (id)_activationElement;

@end

@interface DTExtensionDescription : DTModelObjectDescription
{
    NSMutableDictionary *_accessStrategies;
}

- (id)bundle;
- (id)derivedExtensionDescriptions;
- (id)basedOnExtensionDescription;
- (id)extensionElement;
- (id)rawExtensionInfo;
- (id)extensionInfo;
- (id)extension:(id)arg1 valueForKey:(id)arg2;
- (id)extension:(id)arg1 primitiveValueForKey:(id)arg2;
- (void)extension:(id)arg1 didAccessValueForKey:(id)arg2;
- (void)extension:(id)arg1 willAccessValueForKey:(id)arg2;
- (void)_finishConfigurationWithSelfElement;
- (id)plugInDescription;
- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (void)didTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)extensionPointDescription;
- (id)extensionClassName;
- (BOOL)_extension:(id)arg1 hasSimpleAccessorForKey:(id)arg2;
- (id)_simpleAccessorNamesForKey:(id)arg1;
- (id)_capitalizedKeyForKey:(id)arg1;
- (BOOL)_isDynamicPropertyKey:(id)arg1;
- (BOOL)_isLocstringTypePropertyKey:(id)arg1;
- (BOOL)_isClassTypePropertyKey:(id)arg1;
- (BOOL)_isModeledPropertyKey:(id)arg1;
- (id)_modeledPropertyDescriptionForKey:(id)arg1;
- (void)_setAccessStrategy:(id)arg1 forKey:(id)arg2;
- (id)_accessStrategyForKey:(id)arg1;
- (void)_connectParentExtensionRelationship;
- (void)_connectExtensionPointRelationship;
- (void)_tearDown;
- (void)_setUp;
- (id)_parentExtensionIdentifier;
- (id)_extensionPointIdentifier;

@end

@interface DTExtensionPrimitiveKeyValueCodingAccessStrategy : DTExtensionAccessStrategy
{
}

- (id)valueForKey:(id)arg1 ofExtension:(id)arg2 withDescription:(id)arg3;

@end

@interface DTExtensionFaultPrimitiveKeyValueCodingAccessStrategy : DTExtensionPrimitiveKeyValueCodingAccessStrategy
{
}

- (BOOL)shouldReplaceStrategyForFaultState:(BOOL)arg1;

@end

@interface DTExtensionKeyValueCodingAccessStrategy : DTExtensionAccessStrategy
{
}

- (id)valueForKey:(id)arg1 ofExtension:(id)arg2 withDescription:(id)arg3;

@end

@interface DTExtensionFaultReplacingKeyValueCodingAccessStrategy : DTExtensionKeyValueCodingAccessStrategy
{
}

- (BOOL)shouldReplaceStrategyForFaultState:(BOOL)arg1;

@end

@interface DTExtensionInfo : NSManagedObject
{
}

- (id)rawExtensionDescription;
- (void)setRawExtensionDescrption:(id)arg1;
- (id)extensionPointDescription;
- (void)setExtensionPointDescription:(id)arg1;
- (id)extensionDescription;
- (void)setExtensionDescription:(id)arg1;
- (id)extensionClassName;
- (void)setExtensionClassName:(id)arg1;
- (BOOL)searchable;
- (void)setSearchable:(BOOL)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end

@interface DTExtensionParameterParser : NSObject
{
    NSManagedObjectContext *_context;
}

+ (id)valueOfAttributeType:(unsigned long long)arg1 forString:(id)arg2;
- (void)parseParametersForExtension:(id)arg1;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;
- (void)_createAndInsertObjectsForRelationship:(id)arg1 usingElements:(id)arg2 withParentObject:(id)arg3;
- (void)_setRelationshipsForObject:(id)arg1 withElement:(id)arg2 filteringKeys:(id)arg3;
- (void)_setAttributesForObject:(id)arg1 withElement:(id)arg2 filteringKeys:(id)arg3;
- (void)_setStringValue:(id)arg1 forAttribute:(id)arg2 inObject:(id)arg3;
- (void)_parseElementsOfExtensionElement:(id)arg1 intoInfo:(id)arg2;
- (void)_parseAttributesOfExtensionElement:(id)arg1 intoInfo:(id)arg2;
- (id)_masterElementFromExtensionElements:(id)arg1;
- (void)_removeElementsWithName:(id)arg1 fromElement:(id)arg2;
- (id)_infoEntityNameForExtension:(id)arg1;
- (id)_context;
- (void)_parseFullParametersForExtension:(id)arg1;
- (void)_parseRawParametersForExtension:(id)arg1;
- (void)_setBasicPropertiesOfInfo:(id)arg1 forExtension:(id)arg2;

@end

@interface DTExtensionPoint : NSObject
{
    id _extensionPointData;
    DTPlugInManager *_plugInManager;
    void *reserved[2];
}

- (id)childExtensionPoints;
- (id)parentExtensionPoint;
- (id)plugIn;
- (id)sharedExtensions;
- (id)extensionSchema;
- (id)extensionProtocolName;
- (id)extensionClassName;
- (id)bundle;
- (id)name;
- (id)version;
- (id)identifier;
- (id)_extensionPointDescription;
- (void)dealloc;
- (id)initWithExtensionPointDescription:(id)arg1 plugInManager:(id)arg2;

@end

@interface DTExtensionPointDescription : DTModelObjectDescription
{
}

- (void)_finishConfigurationWithSelfElement;
- (id)childExtensionPointDescriptions;
- (id)parentExtensionPointDescription;
- (id)extensionSchema;
- (void)setExtensionSchema:(id)arg1;
- (id)plugInDescription;
- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (void)willSave;
- (void)awakeFromFetch;
- (id)extensionDescriptions;
- (id)extensionProtocolName;
- (id)extensionClassName;
- (id)_findParentByIdentifier;
- (void)_connectParentExtensionPointRelationship;
- (id)_parentExtensionPointIdentifier;

@end

@interface DTExtensionSchemaComposer : NSObject
{
    NSManagedObjectModel *_model;
    NSEntityDescription *_rootEntity;
}

+ (id)infoEntityNameForExtensionPointIdentifier:(id)arg1;
+ (id)_predicateMatchingCIdentifier;
- (id)composedManagedObjectModel;
- (void)addSchemaForExtensionPoint:(id)arg1;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1;
- (id)_masterSchemaFromSchemaElements:(id)arg1;
- (void)_addSchema:(id)arg1 forExtensionPointIdentifier:(id)arg2;
- (id)_entitiesFromElementElement:(id)arg1 forParentEntity:(id)arg2;
- (id)_entityNameFromElementName:(id)arg1 forParentEntityName:(id)arg2;
- (id)_attributeFromAttributeElement:(id)arg1;
- (BOOL)_isValidAttributeName:(id)arg1;
- (BOOL)_parseIsOptionalFromUseNode:(id)arg1;
- (unsigned long long)_attributeTypeFromXMLSchemaType:(id)arg1;
- (id)_model;
- (id)_rootEntity;

@end

@interface DTExtensionSuperclassKeyValueCodingAccessStrategy : DTExtensionAccessStrategy
{
}

- (id)valueForKey:(id)arg1 ofExtension:(id)arg2 withDescription:(id)arg3;
- (id)_superValueForKey:(id)arg1 fromExtension:(id)arg2;

@end

@interface DTFileOutputStream : DTOutputStream
{
    int _fileDescriptor;
    BOOL _closeFDWhenStreamIsClosed;
}

+ (id)nullFileOutputStream;
+ (id)stderrFileOutputStream;
+ (id)stdoutFileOutputStream;
- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)finalize;
- (void)dealloc;
- (void)_primitiveClose;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 closeFileDescriptorWhenStreamIsClosed:(BOOL)arg2;

@end

@interface DTFileSystemEventStream : NSObject
{
    struct __FSEventStream *_eventStream;
    struct FSEventStreamContext _context;
    id <DTFileSystemEventStreamDelegate> _delegate;
    unsigned long long _lastEventProcessed;
    struct {
        unsigned int _notedChangeAtPath:1;
        unsigned int _notedChangeOfRootPath:1;
        unsigned int _notedVolumeMount:1;
        unsigned int _notedVolumeUnmount:1;
        unsigned int _historyComplete:1;
        unsigned int _historyWrapped:1;
        unsigned int _reserved:26;
    } _delegateFlags;
}

- (unsigned long long)lastEventProcessed;
@property id <DTFileSystemEventStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)flushSync;
- (void)flush;
- (void)stop;
- (void)start;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPaths:(id)arg1 watchRoot:(BOOL)arg2;
- (id)initWithPaths:(id)arg1 startingWithEvent:(unsigned long long)arg2 latency:(double)arg3 defer:(BOOL)arg4 watchRoot:(BOOL)arg5;
- (void)_processEvent:(unsigned long long)arg1 withFlags:(unsigned int)arg2 forPath:(id)arg3;
- (void)_processEvents:(const unsigned long long *)arg1 count:(unsigned long long)arg2 withFlags:(const unsigned int *)arg3 forPaths:(id)arg4;
- (struct __CFString *)_getCFRunLoopModeFromNSRunLoopMode:(id)arg1;
- (struct __CFRunLoop *)_getCFRunLoopFromNSRunLoop:(id)arg1;

@end

@interface DTInvalidExtension : DTExtension
{
    NSString *_identifier;
}

- (id)extensionElement;
- (id)derivedExtensions;
- (id)basedOnExtension;
- (id)extensionPoint;
- (BOOL)isValid;
- (id)bundle;
- (id)name;
- (id)version;
- (id)identifier;
- (id)extensionData;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)_throwInvalidExtensionExceptionForProperty:(id)arg1;

@end

@interface DTLineBufferedOutputStream : DTFilterOutputStream
{
    char *_bufferedBytes;
    unsigned long long _numBufferedBytes;
}

- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithNextOutputStream:(id)arg1;

@end

@interface DTMutableRangeArray : NSMutableArray
{
    unsigned long long _count;
    unsigned long long _capacity;
    struct _NSRange *_ranges;
}

+ (void)initialize;
- (void)normalize;
- (void)removeAllRanges;
- (void)removeRangesAtIndexes:(id)arg1;
- (void)removeRangeAtIndex:(unsigned long long)arg1;
- (void)insertRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)addRange:(struct _NSRange)arg1;
- (void)setRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfRangeContainingOrFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeContainingOrPreceding:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangePreceding:(unsigned long long)arg1;
- (struct _NSRange)lastRange;
- (struct _NSRange)firstRange;
- (unsigned long long)indexOfRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;
- (id)initWithRanges:(const struct _NSRange *)arg1 count:(unsigned long long)arg2;
- (id)initWithObjects:(id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

@interface DTPlugInLocator : NSObject
{
}

- (BOOL)canUsePlugInAtPath:(id)arg1 bundle:(id *)arg2 plugInXML:(id *)arg3;
- (BOOL)_checkCanUsePlugInAtPath:(id)arg1 plugInXML:(id *)arg2;
- (BOOL)_checkCanUsePlugInAtPath:(id)arg1 bundle:(id *)arg2;

@end

@interface DTPlatformPlugInLocator : DTPlugInLocator
{
    NSString *_toolName;
}

@property(copy) NSString *toolName; // @synthesize toolName=_toolName;
- (BOOL)canUsePlugInAtPath:(id)arg1 bundle:(id *)arg2 plugInXML:(id *)arg3;
- (BOOL)_checkCanUsePlatformAtPath:(id)arg1 plugInXML:(id *)arg2;
- (id)_synthesizedXMLForPlatform:(id)arg1;
- (id)_plugInForPlatformWithName:(id)arg1 identifier:(id)arg2 version:(id)arg3;
- (id)_extensionElementForPlatformWithName:(id)arg1 identifier:(id)arg2 version:(id)arg3;
- (id)_searchPathElementForRelativePath:(id)arg1;
- (id)_plugInElementWithName:(id)arg1 identifier:(id)arg2 version:(id)arg3;
- (id)_platformDeveloperLibraryPath;
- (void)dealloc;
- (id)initWithToolName:(id)arg1;

@end

@interface DTPlugIn : NSObject
{
    id _plugInData;
    DTPlugInManager *_plugInManager;
    void *reserved[2];
}

- (BOOL)load:(id *)arg1;
- (BOOL)isLoaded;
- (id)principalInstance;
- (id)path;
- (id)bundle;
- (id)requiredPlugIns;
- (id)extensionPoints;
- (id)extensions;
- (BOOL)preload;
- (id)version;
- (id)identifier;
- (id)name;
- (id)_plugInDescription;
- (void)dealloc;
- (id)initWithPlugInDescription:(id)arg1 plugInManager:(id)arg2;

@end

@interface DTPlugInActivator : NSObject
{
    NSManagedObjectContext *_context;
    NSMutableArray *_plugInsToEvaluate;
    NSMutableArray *_extensionPointsToEvaluate;
    NSMutableArray *_extensionsToEvaluate;
    NSMutableArray *_plugInsToActivate;
    NSMutableArray *_extensionPointsToActivate;
    NSMutableArray *_extensionsToActivate;
    NSMutableArray *_plugInsToNotActivate;
    NSMutableArray *_extensionPointsToNotActivate;
    NSMutableArray *_extensionsToNotActivate;
    NSArray *_systemInformation;
}

+ (id)_plugInEvaluationOrderSortDescriptors;
+ (id)_evaluationOrderSortDescriptors;
- (id)extensionsToActivate;
- (id)extensionPointsToActivate;
- (id)plugInsToActivate;
- (void)performActivation;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;
- (void)_markExtensions;
- (void)_markExtensionPoints;
- (void)_markPlugIns;
- (void)_setActivated:(BOOL)arg1 forObjects:(id)arg2;
- (id)_hostApplicationVersion;
- (id)_operatingSystemVersion;
- (void)_evaluateActivationRulesForExtensions;
- (void)_evaluateActivationRulesForExtensionPoints;
- (void)_evaluateActivationRulesForPlugIns;
- (void)_applyActivationRulesTo:(id)arg1 objectsToActivate:(id)arg2 objectsToNotActivate:(id)arg3;
- (id)_arrayByTrimmingDuplicates:(id)arg1;
- (BOOL)_canActivateModelObject:(id)arg1 neverActivate:(char *)arg2;
- (BOOL)_checkActivationRules:(id)arg1 againstActivatedObjects:(id)arg2 andPendingObjects:(id)arg3 neverActivate:(char *)arg4;
- (void)_preActivateExtensions;
- (void)_preActivateExtensionPoints;
- (void)_preActivatePlugIns;
- (void)_populateExtensionsToEvaluate;
- (void)_populateExtensionPointsToEvaluate;
- (void)_populatePlugInsToEvaluate;
- (id)_fetchAllInstancesOfEntityWithName:(id)arg1 activated:(BOOL)arg2;
- (id)_fetchAllInstancesOfEntityWithName:(id)arg1 activated:(BOOL)arg2 sortedBy:(id)arg3;

@end

@interface DTPlugInDescription : DTModelObjectDescription
{
}

- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (BOOL)load:(id *)arg1;
- (BOOL)isLoaded;
- (id)principalInstance;
- (int)scanOrder;
- (id)path;
- (id)bundle;
- (id)requiredPlugInDescriptions;
- (id)extensionPointDescriptions;
- (id)extensionDescriptions;
- (BOOL)preload;
- (void)configureWithXMLDocument:(id)arg1 name:(id)arg2 identifier:(id)arg3 version:(id)arg4 bundle:(id)arg5 path:(id)arg6;
- (void)configureWithBundle:(id)arg1;
- (void)_connectRequiredPlugInsRelationship;
- (id)_requiredPlugInIdentifiers;
- (void)_finishConfigurationWithSelfElement;
- (void)_instantiatePrincipalClassWithName:(id)arg1;
- (id)_plugInXMLFromBundle:(id)arg1;
- (void)willSave;
- (void)awakeFromFetch;
- (BOOL)isLoadable;
- (void)setBundlePath:(id)arg1;
- (id)bundlePath;
- (void)setScanOrder:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setBundle:(id)arg1;

@end

@interface DTPlugInManager : NSObject <NSLocking>
{
    NSMutableArray *_searchPaths;
    NSMutableSet *_pathExtensions;
    NSString *_plugInCachePath;
    DTPlugInLocator *_plugInLocator;
    NSManagedObjectModel *_model;
    NSManagedObjectModel *_modelForArchiving;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectContext *_context;
    NSPersistentStore *_store;
    NSManagedObjectModel *_modelForActivation;
    NSPersistentStoreCoordinator *_coordinatorForActivation;
    NSManagedObjectContext *_contextForActivation;
    NSMutableDictionary *_plugInsByIdentifier;
    NSMutableDictionary *_extensionPointsByIdentifier;
    NSMutableDictionary *_sharedExtensionsByIdentifier;
}

+ (id)defaultPlugInManager;
+ (void)_setDefaultPlugInManager:(id)arg1;
- (id)sharedExtensionsForExtensionPoint:(id)arg1 matchingPredicate:(id)arg2;
- (id)newExtensionWithIdentifier:(id)arg1;
- (id)sharedExtensionWithIdentifier:(id)arg1;
- (id)extensionPointWithIdentifier:(id)arg1;
- (BOOL)scanForPlugIns:(id *)arg1;
- (id)pathExtensions;
- (void)setPathExtensions:(id)arg1;
- (id)searchPaths;
- (void)setSearchPaths:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)unlock;
- (BOOL)tryLock;
- (void)lock;
- (void)setPlugInLocator:(id)arg1;
- (id)plugInLocator;
- (id)_invalidExtensionWithIdentifier:(id)arg1;
- (id)_sharedExtensionsForSingleExtensionPoint:(id)arg1 matchingPredicate:(id)arg2;
- (void)_cacheSharedExtension:(id)arg1;
- (id)_cachedSharedExtensionWithIdentifier:(id)arg1;
- (void)_cacheExtensionPoint:(id)arg1;
- (id)_cachedExtensionPointWithIdentifier:(id)arg1;
- (void)_cachePlugIn:(id)arg1;
- (id)_cachedPlugInWithIdentifier:(id)arg1;
- (id)_fullModelFileName;
- (id)_fullCacheName;
- (id)_plugInCachePath;
- (id)_applicationCachesPath;
- (id)_secureCachePath;
- (id)_lastScanPlugInPaths;
- (id)_lastScanDate;
- (BOOL)_savePlugInCacheWithTimestamp:(id)arg1 scannedPlugInPaths:(id)arg2 initialScan:(BOOL)arg3 error:(id *)arg4;
- (void)_createPlugInCacheDirectory;
- (void)_removeCacheFileAtPath:(id)arg1;
- (BOOL)_loadFullPlugInObjectGraphFromCache;
- (BOOL)_hasChangesBetweenCacheAndPlugInPaths:(id)arg1;
- (BOOL)_cacheUpToDateForPlugInsAtPaths:(id)arg1 withLastScanDate:(id)arg2;
- (BOOL)_cacheCoversPlugInsAtPaths:(id)arg1;
- (BOOL)_cacheRequiresRescan;
- (id)_applicationModificationDate;
- (id)_frameworkModificationDate;
- (id)_modificationDateOfFileAtPath:(id)arg1;
- (BOOL)_shouldUseCache;
- (id)_newRetainedExtensionWithDescription:(id)arg1;
- (id)_newRetainedExtensionFaultWithDescription:(id)arg1;
- (Class)_extensionClassForExtensionDescription:(id)arg1;
- (id)_fireRetainedFaultForExtensionDescription:(id)arg1;
- (id)_sharedExtensionWithDescription:(id)arg1;
- (id)_extensionPointWithDescription:(id)arg1;
- (id)_plugInWithDescription:(id)arg1;
- (id)_extensionDescriptionWithIdentifier:(id)arg1;
- (id)_extensionPointDescriptionWithIdentifier:(id)arg1;
- (id)_plugInDescriptionWithIdentifier:(id)arg1;
- (id)_fetchInstancesOfEntity:(id)arg1 withIdentifier:(id)arg2 fetchLimit:(unsigned long long)arg3;
- (void)_preLoadPlugIns;
- (void)_updateFullObjectGraph;
- (void)_createFullExtensions;
- (void)_parseParametersForFullExtensions:(id)arg1;
- (void)_createFullExtensionPoints;
- (void)_createFullPlugIns;
- (id)_newFullPlugInModel;
- (id)_allExtensionDescriptions;
- (id)_allExtensionPointDescriptions;
- (id)_allPlugInDescriptions;
- (id)_activatedExtensionDescriptions;
- (id)_activatedExtensionPointDescriptions;
- (id)_activatedPlugInDescriptions;
- (id)_allInstancesOfEntityNamed:(id)arg1 activated:(BOOL)arg2 inContext:(id)arg3;
- (id)_notActivatedPredicate;
- (id)_activatedPredicate;
- (void)_clearActivationObjectGraph;
- (void)_resolveActivationObjectGraph;
- (void)_pruneActivationObjectGraph;
- (void)_pruneDuplicateActivationExtensions;
- (void)_pruneAllActivationExtensionPointsNotYetActivated;
- (void)_pruneDuplicateActivationPlugIns;
- (void)_pruneActivationObjectsForEntityName:(id)arg1;
- (id)_activationObjectsForEntityName:(id)arg1 activated:(BOOL)arg2 withIdentifiers:(id)arg3;
- (void)_updateActivationObjectGraph;
- (id)_modelObjectInCollection:(id)arg1 withIdentifier:(id)arg2;
- (id)_activationPlugInMatchingFullPlugIn:(id)arg1;
- (void)_createActivationObjectGraphWithPlugInPaths:(id)arg1;
- (id)_contextForActivation;
- (id)_coordinatorForActivation;
- (id)_modelForActivation;
- (void)_configureActivationPersistenceStack;
- (id)_context;
- (id)_coordinator;
- (id)_model;
- (void)_configureFullPersistenceStackWithModel:(id)arg1;
- (id)_newManagedObjectContextWithCoordinator:(id)arg1;
- (void)_managedObjectContextCreationThread:(id)arg1;
- (id)_newRetainedBaselineModel;
- (id)_scanForPlugInsInDirectories:(id)arg1;
- (id)_additionalSearchPathsForPlugInAtPath:(id)arg1 withBundle:(id)arg2 plugInElement:(id)arg3;
- (id)_fullPathForSearchPathElement:(id)arg1 forPlugInPath:(id)arg2;
- (BOOL)_scanForPlugIns:(id *)arg1;
- (BOOL)_isInitialScan;
- (id)_defaultPathExtensions;
- (id)_defaultSearchPaths;
- (id)_defaultApplicationSupportSubdirectory;

@end

@interface DTRangeArray : NSArray
{
    unsigned long long _count;
    struct _NSRange *_ranges;
}

+ (void)initialize;
- (id)normalizedRangeArray;
- (unsigned long long)indexOfRangeContainingOrFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeContainingOrPreceding:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangePreceding:(unsigned long long)arg1;
- (struct _NSRange)lastRange;
- (struct _NSRange)firstRange;
- (unsigned long long)indexOfRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;
- (id)initWithRanges:(const struct _NSRange *)arg1 count:(unsigned long long)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

@end

@interface DTStackBacktrace : NSObject
{
    NSArray *_returnAddresses;
    NSString *_stringRep;
}

+ (id)_callStackReturnAddressesExcludingTwoFrames;
+ (id)currentStackBacktrace;
+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
- (id)_frameStringForAddress:(unsigned long long)arg1 symbolicatorPtr:(struct _CSTypeRef)arg2 symbolPtr:(struct _CSTypeRef)arg3;
- (id)stringRepresentation;
- (void)dealloc;
- (id)initWithCallStackReturnAddresses:(id)arg1;
- (id)init;

@end

@interface DTToolsInfo : NSObject
{
    NSNumber *_isAppleInternal;
}

+ (id)toolsInfo;
@property(readonly) BOOL isAppleInternal;

@end

@interface DTToolsVersion : NSObject
{
    NSString *_versionName;
    NSString *_versionNameWithoutUpdate;
    unsigned long long _versionMajor;
    unsigned long long _versionMinor;
    unsigned long long _versionUpdate;
}

+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 update:(unsigned long long)arg3;
+ (id)version6_0_0;
+ (id)version5_1_1;
+ (id)version5_1_0;
+ (id)version5_0_2;
+ (id)version5_0_1;
+ (id)version5_0_0;
+ (id)version4_6_3;
+ (id)version4_6_2;
+ (id)version4_6_1;
+ (id)version4_6_0;
+ (id)version4_5_2;
+ (id)version4_5_1;
+ (id)version4_5_0;
+ (id)version4_4_1;
+ (id)version4_4_0;
+ (id)version4_3_3;
+ (id)version4_3_2;
+ (id)version4_3_1;
+ (id)version4_3_0;
+ (id)version4_2_5;
+ (id)version4_2_1;
+ (id)version4_2_0;
+ (id)version4_1_0;
+ (id)version4_0_2;
+ (id)version4_0_1;
+ (id)version4_0_0;
+ (id)version3_2_6;
+ (id)version3_2_5;
+ (id)version3_2_4;
+ (id)version3_2_3;
+ (id)version3_2_2;
+ (id)version3_2_1;
+ (id)version3_2_0;
+ (id)version3_1_4;
+ (id)version3_1_3;
+ (id)version3_1_2;
+ (id)version3_1_1;
+ (id)version3_1_0;
+ (id)version3_0_0;
+ (id)version2_5_0;
+ (id)versionWithString:(id)arg1;
+ (id)allKnownVersions;
+ (id)currentVersion;
- (void)dealloc;
- (id)description;
- (unsigned long long)versionUpdate;
- (unsigned long long)versionMinor;
- (unsigned long long)versionMajor;
- (id)nameWithoutUpdate;
- (id)name;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithVersionMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 update:(unsigned long long)arg3;

@end

@interface NSArray (DevToolsFoundationAdditions)
- (id)arrayBySubstitutingObjectsUsingDictionary:(id)arg1;
- (struct _NSRange)rangeOfArray:(id)arg1;
- (struct _NSRange)rangeOfArray:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
@end

@interface NSCharacterSet (DevToolsFoundationAdditions)
@end

@interface NSData (DevToolsFoundationAdditions)
+ (id)dataWithFirstBytes:(unsigned long long)arg1 ofFile:(id)arg2;
- (void)writeToFile:(id)arg1 atomically:(BOOL)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)dataWithMD5Digest;
@end

@interface NSDictionary (DevToolsFoundationAdditions)
+ (id)dictionaryWithKeysAndObjects:(id)arg1;
@end

@interface NSException (DTNSExceptionAdditions)
- (id)stackBacktrace;
@end

@interface NSMutableArray (DevToolsFoundationAdditions)
@end

@interface NSMutableData (DevToolsFoundationAdditions)
- (void)appendMD5DigestOfData:(id)arg1;
- (void)appendMD5DigestOfBytes:(const void *)arg1 length:(unsigned long long)arg2;
@end

@interface NSMutableDictionary (DevToolsFoundationAdditions)
@end

@interface NSMutableString (DevToolsFoundationAdditions)
@end

@interface NSObject (DTAssertionSupport)
+ (id)descriptionForAssertionMessage;
- (id)descriptionForAssertionMessage;
@end

@interface NSString (DevToolsFoundationAdditions)
+ (id)stringWithStrings:(id)arg1;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
- (id)removeAllWhiteSpaceCharacters;
@end

