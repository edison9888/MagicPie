//
//  ExamplePieView.h
//  MagicPie
//
//  Created by Alexandr on 10.10.13.
//  Copyright (c) 2013 Alexandr Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PieLayer;
@interface ExamplePieView : UIView


@end

@interface ExamplePieView (ex)
@property(nonatomic,readonly,retain) PieLayer *layer;
@end