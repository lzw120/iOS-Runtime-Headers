/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVRunLoopCondition, AVWeakReference;

@interface AVAssetReaderOutputInternal : NSObject {
    NSInteger extractionID;
    struct OpaqueFigAssetReader { } *figAssetReader;
    NSInteger finished;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToAssetReader;
}

@end