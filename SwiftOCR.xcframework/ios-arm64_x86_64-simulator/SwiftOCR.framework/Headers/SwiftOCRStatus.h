/* HONEYWELL CONFIDENTIAL AND PROPRIETARY!
 *
 * SwiftDecoder Mobile Decoding Software
 * 2015 Hand Held Products, Inc. d/b/a
 * Honeywell Scanning and Mobility
 * Patent(s: https://www.honeywellaidc.com/Pages/patents.aspx
 */

/** @file SwiftOCRStatus.h
 *
 *  This enumeration represents all available Activation/Deactivation responses
 */

/**
 *  @brief This enumeration represents all available Template OCR Result
 */

typedef enum
{
    /** @brief Activation Failed. Please check network related issues with your environment and honeywell servers. */
    ENABLE_FAILED = 0,
    /** @brief Activation was successful */
    ENABLE_SUCCESS = 1,
    /** @brief Feature not Available for given License */
    FEATURE_NOTAVAILABLE = 2,
    /** @brief SWIFTOCR Detection Mode Not Set */
    SWIFTOCR_DETECTION_MODE_NOT_SET = 3
}SwiftOCRStatus;
