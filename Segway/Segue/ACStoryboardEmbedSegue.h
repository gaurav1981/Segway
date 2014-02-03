//
//  ACStoryboardEmbedSegue.h
//  Segway
//
//  Created by Arnaud Coomans on 02/02/14.
//  Copyright (c) 2014 Arnaud Coomans. All rights reserved.
//

#import "ACStoryboardSegue.h"

@interface ACStoryboardEmbedSegue : ACStoryboardSegue

@property (nonatomic, weak) UIView *containerView;

- (void)perform;

@end