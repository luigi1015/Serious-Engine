/* Copyright (c) 2002-2012 Croteam Ltd. All rights reserved. */

#include "StdH.h"
#include <Engine/Ska/Render.h>
#include <Shaders/Common.h>

#define TEXTURE_COUNT 3
#define UVMAPS_COUNT  1
#define COLOR_COUNT   3
#define FLOAT_COUNT   0

#define BASE_TEXTURE 0
#define BASE_UVMAP   0
#define BASE_COLOR   0
#define BASE_FLOAT   0
#define REFLECTION_TEXTURE 1
#define REFLECTION_COLOR   1
#define SPECULAR_TEXTURE 2
#define SPECULAR_COLOR   2

SHADER_MAIN(ReflectionAndSpecularDS)
{
#if 0
  shaSetTexture(BASE_TEXTURE);
  shaSetTextureWrapping( GFX_REPEAT, GFX_REPEAT);
  shaSetUVMap(BASE_UVMAP);
  shaSetColor(BASE_COLOR);
  shaEnableDepthTest(TRUE);
  shaDepthFunc(GFX_LESS_EQUAL);
  shaCullFace(GFX_NONE);
  shaCalculateLight();

  COLOR colModelColor = MulColors(shaGetModelColor(),shaGetCurrentColor());
  BOOL bOpaque = (colModelColor&0xFF)==0xFF;
  // if fully opaque
  if(bOpaque) {
    shaEnableAlphaTest(FALSE);
    shaEnableBlend(FALSE);
    shaEnableDepthWrite(TRUE);
  // if translucent
  } else {
    shaEnableBlend(TRUE);
    shaBlendFunc(GFX_SRC_ALPHA, GFX_INV_SRC_ALPHA);
    shaEnableDepthWrite(FALSE);
    shaModifyColorForFog();
  }

  if(shaOverBrightningEnabled()) shaSetTextureModulation(2);
  shaRender();
  if(shaOverBrightningEnabled()) shaSetTextureModulation(1);

  DoReflectionLayer(REFLECTION_TEXTURE,REFLECTION_COLOR,FALSE);
  DoSpecularLayer(SPECULAR_TEXTURE,SPECULAR_COLOR);
  if(bOpaque) {
    shaDoFogPass();
  }
#endif
}

SHADER_DESC(ReflectionAndSpecularDS,ShaderDesc &shDesc)
{
  shDesc.sd_astrTextureNames.New(TEXTURE_COUNT);
  shDesc.sd_astrTexCoordNames.New(UVMAPS_COUNT);
  shDesc.sd_astrColorNames.New(COLOR_COUNT);
  shDesc.sd_astrFloatNames.New(FLOAT_COUNT);

  shDesc.sd_astrTextureNames[0] = "Base texture";
  shDesc.sd_astrTextureNames[1] = "Reflection texture";
  shDesc.sd_astrTextureNames[2] = "Specular texture";
  shDesc.sd_astrTexCoordNames[0] = "Base uvmap";
  shDesc.sd_astrColorNames[0] = "Base color";
  shDesc.sd_strShaderInfo = "Basic shader";
  shDesc.sd_astrColorNames[1] = "Reflection color";
  shDesc.sd_astrColorNames[2] = "Specular color";
}