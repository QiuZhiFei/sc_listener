//
// SCListener 1.0
// http://github.com/stephencelis/sc_listener
//
// (c) 2009-* Stephen Celis, <stephen@stephencelis.com>.
// Released under the MIT License.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioQueue.h>
#import <AudioToolbox/AudioServices.h>

@interface SCListener : NSObject {
	AudioQueueLevelMeterState *levels;
	
	AudioQueueRef queue;
	AudioStreamBasicDescription format;
	Float64 sampleRate;
}

+ (SCListener *)sharedListener;

- (void)listen;
- (BOOL)isListening;
- (void)pause;
- (void)stop;

- (Float32)averagePower;
- (Float32)peakPower;
- (AudioQueueLevelMeterState *)levels;

@end
