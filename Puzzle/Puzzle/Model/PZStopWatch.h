//
//  PZStopWatch.h
//  Puzzle
//
//  Created by Eugene But on 9/14/12.
//
//

//////////////////////////////////////////////////////////////////////////////////////////
#import <Foundation/Foundation.h>

//////////////////////////////////////////////////////////////////////////////////////////
@protocol PZStopWatchDelegate;

//////////////////////////////////////////////////////////////////////////////////////////
@interface PZStopWatch : NSObject

- (void)start;
- (void)stop;
- (void)reset;

@property (nonatomic, assign) id<PZStopWatchDelegate> delegate;

@property (nonatomic, assign) NSUInteger totalSeconds;

@end

//////////////////////////////////////////////////////////////////////////////////////////
@protocol PZStopWatchDelegate <NSObject>

- (void)PZStopWatchDidChangeTime:(PZStopWatch *)aStopWatch;

@end