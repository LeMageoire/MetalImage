//
//  MetalImageBrightnessFilter.h
//  MetalImage
//
//  Created by erickingxu on 25/7/2016.
//  Copyright © 2016 erickingxu. All rights reserved.
//


#import "MetalImageFilter.h"
#import "simd/simd.h"

@interface MetalImageBrightnessFilter : MetalImageFilter

-(void)setbrightnessBuffer:(float*)brightArr;

@end
