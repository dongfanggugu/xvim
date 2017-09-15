//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct OpaqueFigPlayer;

struct OpaqueFigSubtitleCALayerInternal {
    struct OpaqueFigPlayer *_field1;
    id _field2;
    unsigned char _field3;
    unsigned char _field4;
    struct CGRect _field5;
    unsigned char _field6;
    struct CGSize _field7;
    unsigned char _field8;
    unsigned char _field9;
    struct CGRect _field10;
    struct CGSize _field11;
    unsigned char _field12;
    id _field13;
    struct OpaqueFigSubtitleRenderer *_field14;
    struct __CFDictionary *_field15;
    unsigned char _field16;
    unsigned char _field17;
    struct __CFDictionary *_field18;
    struct __CFArray *_field19;
    struct __CFArray *_field20;
    struct CGRect _field21;
    struct CGRect _field22;
    unsigned char _field23;
    _Bool _field24;
    unsigned char _field25;
};

struct OpaqueFigSubtitleRenderer;

struct OpaqueFigSubtitleWebVTTCueCALayerInternal {
    id _field1;
    id _field2;
    struct OpaqueFigSubtitleRenderer *_field3;
    struct CGRect _field4;
    struct __CFAttributedString *_field5;
    unsigned char _field6;
};

struct OpaqueFigSubtitleWebVTTRegionCALayerInternal {
    id _field1;
    id _field2;
    struct OpaqueFigSubtitleRenderer *_field3;
    struct CGRect _field4;
    struct __CFDictionary *_field5;
    struct __CFArray *_field6;
    unsigned int _field7;
};

struct __CFArray;

struct __CFDictionary;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
// UUID: A9142429-29F7-33AE-994E-F736F4E8EEF8
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 1560.28.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface FigCaptionLayer : CALayer
{
    FigCaptionLayerPrivate *_priv;
}

- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayers;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;
- (void)dealloc;
- (void)finalize;
- (void)setFontName:(const char *)arg1;
- (id)init;

@end

@interface FigCaptionLayerPrivate : NSObject
{
    struct OpaqueFigCFCaptionRenderer *renderer;
    NSMutableArray *captionElementLayers;
    struct OpaqueFigSimpleMutex *renderMutex;
    struct OpaqueFigReentrantMutex *layoutSublayersMutex;
}

@end

@interface FigCaptionRowLayer : CALayer
{
}

- (void)setNeedsDisplay;

@end

@interface FigSubtitleCALayer : CALayer
{
    struct OpaqueFigSubtitleCALayerInternal *layerInternal;
}

+ (id)defaultActionForKey:(id)arg1;
- (void)handleNeedsLayoutNotification;
- (void)removeAnimations;
- (void)addAnimations:(void *)arg1;
- (id)subtitleLayerDisplay;
@property(nonatomic, getter=isOverscanSubtitleSupportEnabled) _Bool overscanSubtitleSupportEnabled;
- (void)endUpdate;
- (void)beginUpdate;
- (void)clear;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg1;
- (void)setVideosize:(struct CGSize)arg1;
- (void)setViewport:(struct CGRect)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)dealloc;
- (void)finalize;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)setPlayer:(struct OpaqueFigPlayer *)arg1;
- (id)actionForKey:(id)arg1;

@end

@interface FigSubtitleWebVTTCueCALayer : CALayer
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)setDefaultFontSize:(double)arg1;
- (void)setViewport:(struct CGRect)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (void)setContent:(struct __CFAttributedString *)arg1;
- (struct __CFString *)getContentID;
- (unsigned char)isDirty;
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;
- (void)setCuePosition:(struct CGPoint)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

@interface FigSubtitleWebVTTRegionCALayer : CALayer
{
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal *layerInternal;
}

- (void)handleNeedsLayoutNotification;
- (void)layoutSublayers;
- (void)setReLayout;
- (void)setNeedsDisplay;
- (void)setViewport:(struct CGRect)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (void)setContent:(struct __CFDictionary *)arg1;
- (struct __CFString *)getContentID;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

@interface FigVideoLayer : CALayer
{
    FigVideoLayerInternal *_videoLayer;
}

- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)notificationBarrier;
- (id)layerDisplayName;
- (_Bool)isVideoLayerBeingServiced;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

@interface FigVideoLayerInternal : NSObject
{
    _Bool isPresentationLayer;
    _Bool visible;
    struct OpaqueFigSimpleMutex *serializationMutex;
    NSObject<OS_dispatch_queue> *notificationSerialQueue;
}

@end

