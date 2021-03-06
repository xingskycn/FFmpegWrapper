//
//  FFOutputStream.h
//  LiveStreamer
//
//  Created by Christopher Ballinger on 10/1/13.
//  Copyright (c) 2013 OpenWatch, Inc. All rights reserved.
//

#import "FFStream.h"

@class FFOutputFile, FFFile;

@interface FFOutputStream : FFStream
@property (nonatomic) int64_t lastMuxDTS;
@property (nonatomic) int frameNumber;

- (id) initWithOutputFile:(FFOutputFile*)outputFile outputCodec:(NSString*)outputCodec;

@end