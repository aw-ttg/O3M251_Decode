#include "DI_CH256_1_8.h"

/* Macros are used for performing endianess corrections; these might be replaced with compiler- or machine-dependent equivalents */
#define IFM_SWAP16(b) {ifm_o3m_uint8_t tmp = (b)[0]; (b)[0] = (b)[1]; (b)[1] = tmp; }
#define IFM_SWAP32(b) {ifm_o3m_uint8_t tmp = (b)[0]; (b)[0] = (b)[3]; (b)[3] = tmp; tmp = (b)[1]; (b)[1] = (b)[2]; (b)[2] = tmp; }
#define IFM_SWAP64(b) {ifm_o3m_uint8_t tmp = (b)[0]; (b)[0] = (b)[7]; (b)[7] = tmp; tmp = (b)[1]; (b)[1] = (b)[6]; (b)[6] = tmp; tmp = (b)[2]; (b)[2] = (b)[5]; (b)[5] = tmp; tmp = (b)[3]; (b)[3] = (b)[4]; (b)[4] = tmp; }

/* Casts the buffer to ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8 (if possible) and returns a pointer to it.
   Use this function on big Endian systems.

   Returns NULL in case of errors. */
ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8* ifm_o3m_ConvertBufferToBigEndian_DIK1_1_8(void *buffer, ifm_o3m_uint32_t bufferSize)
{
    ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8* res = (ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8*)buffer;
    if( (!buffer) || (bufferSize != 536) || (sizeof(ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8) != 536) )
    {
        return 0;
    }
    if ( ! ( (res->magic_no[0] == 'O' ) && (res->magic_no[1] == '3' ) && (res->magic_no[2] == 'M' ) && (res->magic_no[3] == '!') &&
             (res->struct_id[0] == 'D') && (res->struct_id[1] == 'I') && (res->struct_id[2] == 'K') && (res->struct_id[3] == '1') &&
             (res->version[0] == 1) && (res->version[1] == 8  ) ) )
    {
        return 0;
    }

    return res;
}

/* Converts the endianess of the buffer to native form and returns a pointer to ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8. 
   Note: The original buffer is modified in place. 
   Use this function on little Endian systems.
   
   Returns NULL in case of errors. */
ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8* ifm_o3m_ConvertBufferToLittleEndian_DIK1_1_8(void *buffer, ifm_o3m_uint32_t bufferSize)
{
    ifm_o3m_uint32_t i;
    ifm_o3m_uint8_t *buf = (ifm_o3m_uint8_t *)buffer;
    ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8* res = (ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8*)buffer;
    if( (!buffer) || (bufferSize != 536) || (sizeof(ifm_o3m_Meas_Customer_Data_Type_DIK1_1_8) != 536) )
    {
        return 0;
    }
    if ( ! ( (res->magic_no[0] == 'O' ) && (res->magic_no[1] == '3' ) && (res->magic_no[2] == 'M' ) && (res->magic_no[3] == '!') &&
             (res->struct_id[0] == 'D') && (res->struct_id[1] == 'I') && (res->struct_id[2] == 'K') && (res->struct_id[3] == '1') &&
             (res->version[0] == 1) && (res->version[1] == 8  ) ) )
    {
        return 0;
    }

    /* CameraMainTemperature */
    IFM_SWAP32(&buf[12]);
    /* CANBaudrate */
    IFM_SWAP32(&buf[48]);
    /* DTCList */
    for(i = 0; i < 16; i++)
    {
        IFM_SWAP32(&buf[(i*4)+56]);
    }
    /* IlluTemperature */
    IFM_SWAP32(&buf[148]);
    /* KpCustomerParameter.CANBaudrate */
    IFM_SWAP32(&buf[188]);
    /* KpCustomerParameter.VSInput0Timeout */
    IFM_SWAP16(&buf[298]);
    /* KpCustomerParameter.VSInput1Timeout */
    IFM_SWAP16(&buf[300]);
    /* KP_Info2D.s_Algo2DPrimStatistics.ui16_TotalShortAlgoPrims */
    IFM_SWAP16(&buf[374]);
    /* KP_Info2D.s_Algo2DPrimStatistics.ui16_TotalLongAlgoPrims */
    IFM_SWAP16(&buf[376]);
    /* KP_Info2D.s_Algo2DPrimStatistics.ui32_ItemsOutOfBounds */
    for(i = 0; i < 8; i++)
    {
        IFM_SWAP32(&buf[(i*4)+380]);
    }
    /* KP_Info2D.s_Fixed2DPrimStatistics.ui16_TotalShortFixedPrims */
    IFM_SWAP16(&buf[414]);
    /* KP_Info2D.s_Fixed2DPrimStatistics.ui16_TotalLongFixedPrims */
    IFM_SWAP16(&buf[416]);
    /* KP_Info2D.s_IPC2DPrimStatistics.ui16_TotalShortIPC2DPrims */
    IFM_SWAP16(&buf[420]);
    /* KP_Info2D.s_IPC2DPrimStatistics.ui16_TotalLongIPC2DPrims */
    IFM_SWAP16(&buf[422]);
    /* KP_Info2D.f32_AverageAlgoPrimsGenTime */
    IFM_SWAP32(&buf[424]);
    /* KP_Info2D.f32_AverageAlgoPrimsGenfps */
    IFM_SWAP32(&buf[428]);
    /* PasswordLocked */
    IFM_SWAP32(&buf[432]);
    /* AnalogMonValues.TempSens */
    IFM_SWAP32(&buf[436]);
    /* AnalogMonValues.Vdd5V9 */
    IFM_SWAP32(&buf[440]);
    /* AnalogMonValues.Vdd5V0 */
    IFM_SWAP32(&buf[444]);
    /* AnalogMonValues.Vdd3V3 */
    IFM_SWAP32(&buf[448]);
    /* AnalogMonValues.Vdd1V25FeR */
    IFM_SWAP32(&buf[452]);
    /* AnalogMonValues.Vdd1V25 */
    IFM_SWAP32(&buf[456]);
    /* AnalogMonValues.VddFe5V0FeR */
    IFM_SWAP32(&buf[460]);
    /* AnalogMonValues.VddFe5V0 */
    IFM_SWAP32(&buf[464]);
    /* AnalogMonValues.UBattMs */
    IFM_SWAP32(&buf[468]);
    /* AnalogMonValues.Vdd1V8 */
    IFM_SWAP32(&buf[472]);
    /* AnalogMonValues.Vdd1V8FeR */
    IFM_SWAP32(&buf[476]);
    /* AnalogMonValues.Vdd3V3FeR */
    IFM_SWAP32(&buf[480]);
    /* AnalogMonValues.V2D3V3Rflt */
    IFM_SWAP32(&buf[484]);
    /* AnalogMonValues.V2D1V3Rflt */
    IFM_SWAP32(&buf[488]);
    /* AnalogMonValues_2D.f32_ImagerTemperature */
    IFM_SWAP32(&buf[492]);
    /* AnalogMonValues_2D.f32_VoltageValue_1V8 */
    IFM_SWAP32(&buf[496]);
    /* AnalogMonValues_2D.f32_VoltageValue_1V8APT */
    IFM_SWAP32(&buf[500]);
    /* AnalogMonValues_2D.f32_VoltageValue_2V8 */
    IFM_SWAP32(&buf[504]);
    /* AnalogMonValues_2D.f32_VoltageValue_2V8A */
    IFM_SWAP32(&buf[508]);
    /* AnalogMonValues_2D.f32_Vdd2V5REF */
    IFM_SWAP32(&buf[512]);
    /* AnalogMonValues_2D.f32_AnVidSt */
    IFM_SWAP32(&buf[516]);
    /* AnalogMonValues_2D.f32_AnVidDac */
    IFM_SWAP32(&buf[520]);
    /* AnalogMonValues_Illu.f32_dkVoltagemin */
    IFM_SWAP32(&buf[524]);
    /* AnalogMonValues_Illu.f32_dkVoltagenom */
    IFM_SWAP32(&buf[528]);
    /* AnalogMonValues_Illu.f32_IlluTemp */
    IFM_SWAP32(&buf[532]);

    return res;
}
