/* include/linux/msm_audio.h
 *
 * Copyright (C) 2008 Google, Inc.
 * Copyright (c) 2009, Code Aurora Forum. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __LINUX_MSM_AUDIO_H
#define __LINUX_MSM_AUDIO_H

#include <linux/types.h>
#include <linux/ioctl.h>
#include <asm/sizes.h>

/* PCM Audio */

#define AUDIO_IOCTL_MAGIC 'a'

#define AUDIO_START        _IOW(AUDIO_IOCTL_MAGIC, 0, unsigned)
#define AUDIO_STOP         _IOW(AUDIO_IOCTL_MAGIC, 1, unsigned)
#define AUDIO_FLUSH        _IOW(AUDIO_IOCTL_MAGIC, 2, unsigned)
#define AUDIO_GET_CONFIG   _IOR(AUDIO_IOCTL_MAGIC, 3, unsigned)
#define AUDIO_SET_CONFIG   _IOW(AUDIO_IOCTL_MAGIC, 4, unsigned)
#define AUDIO_GET_STATS    _IOR(AUDIO_IOCTL_MAGIC, 5, unsigned)
#define AUDIO_ENABLE_AUDPP _IOW(AUDIO_IOCTL_MAGIC, 6, unsigned)
#define AUDIO_SET_ADRC     _IOW(AUDIO_IOCTL_MAGIC, 7, unsigned)
#define AUDIO_SET_EQ       _IOW(AUDIO_IOCTL_MAGIC, 8, unsigned)
#define AUDIO_SET_RX_IIR   _IOW(AUDIO_IOCTL_MAGIC, 9, unsigned)
#define AUDIO_SET_VOLUME   _IOW(AUDIO_IOCTL_MAGIC, 10, unsigned)
#define AUDIO_PAUSE        _IOW(AUDIO_IOCTL_MAGIC, 11, unsigned)
#define AUDIO_PLAY_DTMF    _IOW(AUDIO_IOCTL_MAGIC, 12, unsigned)
#define AUDIO_GET_EVENT    _IOR(AUDIO_IOCTL_MAGIC, 13, unsigned)
#define AUDIO_ABORT_GET_EVENT _IOW(AUDIO_IOCTL_MAGIC, 14, unsigned)
#define AUDIO_REGISTER_PMEM _IOW(AUDIO_IOCTL_MAGIC, 15, unsigned)
#define AUDIO_DEREGISTER_PMEM _IOW(AUDIO_IOCTL_MAGIC, 16, unsigned)
#define AUDIO_ASYNC_WRITE _IOW(AUDIO_IOCTL_MAGIC, 17, unsigned)
#define AUDIO_ASYNC_READ _IOW(AUDIO_IOCTL_MAGIC, 18, unsigned)
#define AUDIO_SET_INCALL _IOW(AUDIO_IOCTL_MAGIC, 19, struct msm_voicerec_mode)
#define AUDIO_GET_NUM_SND_DEVICE _IOR(AUDIO_IOCTL_MAGIC, 20, unsigned)
#define AUDIO_GET_SND_DEVICES _IOWR(AUDIO_IOCTL_MAGIC, 21, \
				struct msm_snd_device_list)
#define AUDIO_ENABLE_SND_DEVICE _IOW(AUDIO_IOCTL_MAGIC, 22, unsigned)
#define AUDIO_DISABLE_SND_DEVICE _IOW(AUDIO_IOCTL_MAGIC, 23, unsigned)
#define AUDIO_ROUTE_STREAM _IOW(AUDIO_IOCTL_MAGIC, 24, \
				struct msm_audio_route_config)
#define AUDIO_GET_PCM_CONFIG _IOR(AUDIO_IOCTL_MAGIC, 30, unsigned)
#define AUDIO_SET_PCM_CONFIG _IOW(AUDIO_IOCTL_MAGIC, 31, unsigned)
#define AUDIO_SWITCH_DEVICE  _IOW(AUDIO_IOCTL_MAGIC, 32, unsigned)
#define AUDIO_SET_MUTE       _IOW(AUDIO_IOCTL_MAGIC, 33, unsigned)
#define AUDIO_UPDATE_ACDB    _IOW(AUDIO_IOCTL_MAGIC, 34, unsigned)
#define AUDIO_START_VOICE    _IOW(AUDIO_IOCTL_MAGIC, 35, unsigned)
#define AUDIO_STOP_VOICE     _IOW(AUDIO_IOCTL_MAGIC, 36, unsigned)
#define AUDIO_REINIT_ACDB    _IOW(AUDIO_IOCTL_MAGIC, 39, unsigned)
#define AUDIO_OUTPORT_FLUSH  _IOW(AUDIO_IOCTL_MAGIC, 40, unsigned short)
#define AUDIO_SET_ERR_THRESHOLD_VALUE _IOW(AUDIO_IOCTL_MAGIC, 41, \
					unsigned short)
#define AUDIO_GET_BITSTREAM_ERROR_INFO _IOR(AUDIO_IOCTL_MAGIC, 42, \
			       struct msm_audio_bitstream_error_info)
/* Qualcomm extensions */
#define AUDIO_SET_STREAM_CONFIG   _IOW(AUDIO_IOCTL_MAGIC, 80, \
				struct msm_audio_stream_config)
#define AUDIO_GET_STREAM_CONFIG   _IOR(AUDIO_IOCTL_MAGIC, 81, \
				struct msm_audio_stream_config)
#define AUDIO_GET_SESSION_ID _IOR(AUDIO_IOCTL_MAGIC, 82, unsigned short)
#define AUDIO_GET_STREAM_INFO   _IOR(AUDIO_IOCTL_MAGIC, 83, \
			       struct msm_audio_bitstream_info)
#define AUDIO_SET_PAN       _IOW(AUDIO_IOCTL_MAGIC, 84, unsigned)
#define AUDIO_SET_QCONCERT_PLUS       _IOW(AUDIO_IOCTL_MAGIC, 85, unsigned)
#define AUDIO_SET_MBADRC       _IOW(AUDIO_IOCTL_MAGIC, 86, unsigned)
#define AUDIO_SET_VOLUME_PATH   _IOW(AUDIO_IOCTL_MAGIC, 87, \
				     struct msm_vol_info)
#define AUDIO_SET_MAX_VOL_ALL _IOW(AUDIO_IOCTL_MAGIC, 88, unsigned)
#define AUDIO_ENABLE_AUDPRE  _IOW(AUDIO_IOCTL_MAGIC, 89, unsigned)
#define AUDIO_SET_AGC        _IOW(AUDIO_IOCTL_MAGIC, 90, unsigned)
#define AUDIO_SET_NS         _IOW(AUDIO_IOCTL_MAGIC, 91, unsigned)
#define AUDIO_SET_TX_IIR     _IOW(AUDIO_IOCTL_MAGIC, 92, unsigned)
#define AUDIO_GET_BUF_CFG    _IOW(AUDIO_IOCTL_MAGIC, 93, \
					struct msm_audio_buf_cfg)
#define AUDIO_SET_BUF_CFG    _IOW(AUDIO_IOCTL_MAGIC, 94, \
					struct msm_audio_buf_cfg)
#define AUDIO_SET_ACDB_BLK _IOW(AUDIO_IOCTL_MAGIC, 95,  \
					struct msm_acdb_cmd_device)
#define AUDIO_GET_ACDB_BLK _IOW(AUDIO_IOCTL_MAGIC, 96,  \
					struct msm_acdb_cmd_device)

#define	AUDIO_MAX_COMMON_IOCTL_NUM	100

#define HANDSET_MIC			0x01
#define HANDSET_SPKR			0x02
#define HEADSET_MIC			0x03
#define HEADSET_SPKR_MONO		0x04
#define HEADSET_SPKR_STEREO		0x05
#define SPKR_PHONE_MIC			0x06
#define SPKR_PHONE_MONO			0x07
#define SPKR_PHONE_STEREO		0x08
#define BT_SCO_MIC			0x09
#define BT_SCO_SPKR			0x0A
#define BT_A2DP_SPKR			0x0B
#define TTY_HEADSET_MIC			0x0C
#define TTY_HEADSET_SPKR		0x0D

/* Default devices are not supported in a */
/* device switching context. Only supported */
/* for stream devices. */
/* DO NOT USE */
#define DEFAULT_TX			0x0E
#define DEFAULT_RX			0x0F

#define BT_A2DP_TX			0x10

#define HEADSET_MONO_PLUS_SPKR_MONO_RX         0x11
#define HEADSET_MONO_PLUS_SPKR_STEREO_RX       0x12
#define HEADSET_STEREO_PLUS_SPKR_MONO_RX       0x13
#define HEADSET_STEREO_PLUS_SPKR_STEREO_RX     0x14

#define I2S_RX				0x20
#define I2S_TX				0x21

#define ADRC_ENABLE		0x0001
#define EQ_ENABLE		0x0002
#define IIR_ENABLE		0x0004
#define QCONCERT_PLUS_ENABLE	0x0008
#define MBADRC_ENABLE		0x0010

#define AGC_ENABLE		0x0001
#define NS_ENABLE		0x0002
#define TX_IIR_ENABLE		0x0004
#define FLUENCE_ENABLE		0x0008

#define VOC_REC_UPLINK		0x00
#define VOC_REC_DOWNLINK	0x01
#define VOC_REC_BOTH		0x02

struct msm_audio_config {
	uint32_t buffer_size;
	uint32_t buffer_count;
	uint32_t channel_count;
	uint32_t sample_rate;
	uint32_t type;
	uint32_t meta_field;
	uint32_t bits;
	uint32_t unused[3];
};

struct msm_audio_stream_config {
	uint32_t buffer_size;
	uint32_t buffer_count;
};

struct msm_audio_buf_cfg{
	uint32_t meta_info_enable;
	uint32_t frames_per_buf;
};

struct msm_audio_stats {
	uint32_t byte_count;
	uint32_t sample_count;
	uint32_t unused[2];
};

struct msm_audio_pmem_info {
	int fd;
	void *vaddr;
};

struct msm_audio_aio_buf {
	void *buf_addr;
	uint32_t buf_len;
	uint32_t data_len;
	void *private_data;
	unsigned short mfield_sz; /*only useful for data has meta field */
};

/* Audio routing */

#define SND_IOCTL_MAGIC 's'

#define SND_MUTE_UNMUTED 0
#define SND_MUTE_MUTED   1

struct msm_mute_info {
	uint32_t mute;
	uint32_t path;
};

struct msm_vol_info {
	uint32_t vol;
	uint32_t path;
};

struct msm_voicerec_mode {
	uint32_t rec_mode;
};

struct msm_snd_device_config {
	uint32_t device;
	uint32_t ear_mute;
	uint32_t mic_mute;
};

#define SND_SET_DEVICE _IOW(SND_IOCTL_MAGIC, 2, struct msm_device_config *)

#define SND_METHOD_VOICE 0

struct msm_snd_volume_config {
	uint32_t device;
	uint32_t method;
	uint32_t volume;
};

#define SND_SET_VOLUME _IOW(SND_IOCTL_MAGIC, 3, struct msm_snd_volume_config *)

/* Returns the number of SND endpoints supported. */

#define SND_GET_NUM_ENDPOINTS _IOR(SND_IOCTL_MAGIC, 4, unsigned *)

struct msm_snd_endpoint {
	int id; /* input and output */
	char name[64]; /* output only */
};

/* Takes an index between 0 and one less than the number returned by
 * SND_GET_NUM_ENDPOINTS, and returns the SND index and name of a
 * SND endpoint.  On input, the .id field contains the number of the
 * endpoint, and on exit it contains the SND index, while .name contains
 * the description of the endpoint.
 */

#define SND_GET_ENDPOINT _IOWR(SND_IOCTL_MAGIC, 5, struct msm_snd_endpoint *)


#define SND_AVC_CTL _IOW(SND_IOCTL_MAGIC, 6, unsigned *)
#define SND_AGC_CTL _IOW(SND_IOCTL_MAGIC, 7, unsigned *)

struct msm_audio_pcm_config {
	uint32_t pcm_feedback;	/* 0 - disable > 0 - enable */
	uint32_t buffer_count;	/* Number of buffers to allocate */
	uint32_t buffer_size;	/* Size of buffer for capturing of
				   PCM samples */
};

#define AUDIO_EVENT_SUSPEND 0
#define AUDIO_EVENT_RESUME 1
#define AUDIO_EVENT_WRITE_DONE 2
#define AUDIO_EVENT_READ_DONE   3
#define AUDIO_EVENT_STREAM_INFO 4
#define AUDIO_EVENT_BITSTREAM_ERROR_INFO 5

#define AUDIO_CODEC_TYPE_MP3 0
#define AUDIO_CODEC_TYPE_AAC 1

struct msm_audio_bitstream_info {
	uint32_t codec_type;
	uint32_t chan_info;
	uint32_t sample_rate;
	uint32_t bit_stream_info;
	uint32_t bit_rate;
	uint32_t unused[3];
};

struct msm_audio_bitstream_error_info {
	uint32_t dec_id;
	uint32_t err_msg_indicator;
	uint32_t err_type;
};

union msm_audio_event_payload {
	struct msm_audio_aio_buf aio_buf;
	struct msm_audio_bitstream_info stream_info;
	struct msm_audio_bitstream_error_info error_info;
	int reserved;
};

struct msm_audio_event {
	int event_type;
	int timeout_ms;
	union msm_audio_event_payload event_payload;
};

#define MSM_SNDDEV_CAP_RX 0x1
#define MSM_SNDDEV_CAP_TX 0x2
#define MSM_SNDDEV_CAP_VOICE 0x4

struct msm_snd_device_info {
	uint32_t dev_id;
	uint32_t dev_cap; /* bitmask describe capability of device */
	char dev_name[64];
};

struct msm_snd_device_list {
	uint32_t  num_dev; /* Indicate number of device info to be retrieved */
	struct msm_snd_device_info *list;
};

struct msm_dtmf_config {
	uint16_t path;
	uint16_t dtmf_hi;
	uint16_t dtmf_low;
	uint16_t duration;
	uint16_t tx_gain;
	uint16_t rx_gain;
	uint16_t mixing;
};

#define AUDIO_ROUTE_STREAM_VOICE_RX 0
#define AUDIO_ROUTE_STREAM_VOICE_TX 1
#define AUDIO_ROUTE_STREAM_PLAYBACK 2
#define AUDIO_ROUTE_STREAM_REC      3

struct msm_audio_route_config {
	uint32_t stream_type;
	uint32_t stream_id;
	uint32_t dev_id;
};

#define AUDIO_MAX_EQ_BANDS 12

struct msm_audio_eq_band {
	uint16_t     band_idx; /* The band index, 0 .. 11 */
	uint32_t     filter_type; /* Filter band type */
	uint32_t     center_freq_hz; /* Filter band center frequency */
	uint32_t     filter_gain; /* Filter band initial gain (dB) */
			/* Range is +12 dB to -12 dB with 1dB increments. */
	uint32_t     q_factor;
} __attribute__ ((packed));

struct msm_audio_eq_stream_config {
	uint32_t	enable; /* Number of consequtive bands specified */
	uint32_t	num_bands;
	struct msm_audio_eq_band	eq_bands[AUDIO_MAX_EQ_BANDS];
} __attribute__ ((packed));

struct msm_acdb_cmd_device {
	uint32_t     command_id;
	uint32_t     device_id;
	uint32_t     network_id;
	uint32_t     sample_rate_id;      /* Actual sample rate value */
	uint32_t     interface_id;        /* See interface id's above */
	uint32_t     algorithm_block_id;  /* See enumerations above */
	uint32_t     total_bytes;         /* Length in bytes used by buffer */
	uint32_t     *phys_buf;           /* Physical Address of data */
};

//LGE_SND_UPDATE_S [
struct msm_snd_72xx_rpc_extcmd_config {
    uint32_t rpc_extcmd;
    uint32_t option;
    uint32_t result;    
};

#define SND_72XX_RPC_EXTCMD _IOWR(SND_IOCTL_MAGIC, 8, struct msm_snd_72xx_rpc_extcmd_config *)

struct msm_snd_audio_cal_config {
    uint32_t nCalType;
    uint32_t nCmd;
    uint32_t nDevice;
    uint32_t nIndex;
    uint32_t nSubIndex;
    uint32_t nItem;
    uint32_t result;
};

#define SND_AUDIO_CAL _IOWR(SND_IOCTL_MAGIC, 9, struct msm_snd_audio_cal_config *)

struct msm_snd_set_fm_radio_vol_param {
	int32_t volume;
};

#define SND_SET_FM_RADIO_VOLUME _IOWR(SND_IOCTL_MAGIC, 17, int *)

typedef enum {
  VOC_CODEC_DEFAULT,
  VOC_CODEC_ON_CHIP_0				= VOC_CODEC_DEFAULT+0, 	/* On Chip Codec Channel 1 */
  VOC_CODEC_ON_CHIP_1				= VOC_CODEC_DEFAULT+1,  	/* On Chip Codec Channel 2          */
  VOC_CODEC_STEREO_HEADSET			= VOC_CODEC_DEFAULT+2,  	/* On Chip Codec Channels 1 and 2   */
  VOC_CODEC_ON_CHIP_AUX				= VOC_CODEC_DEFAULT+3,  	/* On Chip Codec Aux. Channel       */
  VOC_CODEC_SPEAKER				= VOC_CODEC_DEFAULT+4,  	/* Speaker Phone                    */
  VOC_CODEC_BT_INTERCOM				= VOC_CODEC_DEFAULT+5,  	/* BT Intercom                      */
  VOC_CODEC_BT_OFF_BOARD			= VOC_CODEC_DEFAULT+6,  	/* External BT codec                */
  VOC_CODEC_BT_AG_LOCAL_AUDIO			= VOC_CODEC_DEFAULT+7,  	/* BT local audio path              */
  VOC_CODEC_BT_A2DP				= VOC_CODEC_DEFAULT+8,
  VOC_CODEC_BT_A2DP_SCO				= VOC_CODEC_DEFAULT+9,
  VOC_CODEC_A2DP_TX_I2S				= VOC_CODEC_DEFAULT+10,   
  VOC_CODEC_A2DP_TX_I2S_RX_LINEOUT		= VOC_CODEC_DEFAULT+11,
  VOC_CODEC_OFF_BOARD				= VOC_CODEC_DEFAULT+12, 	/* Aux. Codec                       */
  VOC_CODEC_SDAC				= VOC_CODEC_DEFAULT+13, 	/* Stereo DAC                       */
  VOC_CODEC_RX_EXT_SDAC_TX_INTERNAL		= VOC_CODEC_DEFAULT+14, 	/* External Stereo DAC and Tx Internal */
  VOC_CODEC_IN_STEREO_SADC_OUT_MONO_HANDSET	= VOC_CODEC_DEFAULT+15, 	/* Stereo line in Mono out    */
  VOC_CODEC_IN_STEREO_SADC_OUT_STEREO_HEADSET   = VOC_CODEC_DEFAULT+16, 	/* Stereo line in STEREO out  */
  VOC_CODEC_TX_INT_SADC_RX_EXT_AUXPCM		= VOC_CODEC_DEFAULT+17, 	/* Stereo line in, AUX_PCM out*/ 
  VOC_CODEC_EXT_STEREO_SADC_OUT_MONO_HANDSET	= VOC_CODEC_DEFAULT+18, 	/* Stereo line in Mono out   */
  VOC_CODEC_EXT_STEREO_SADC_OUT_STEREO_HEADSET 	= VOC_CODEC_DEFAULT+19, 	/* Stereo line in STEREO out */
  VOC_CODEC_TTY_ON_CHIP_1			= VOC_CODEC_DEFAULT+20, 	/* TTY On Chip Codec Channel 2      */
  VOC_CODEC_TTY_OFF_BOARD			= VOC_CODEC_DEFAULT+21, 	/* TTY Aux. Codec                   */
  VOC_CODEC_TTY_VCO				= VOC_CODEC_DEFAULT+22, 	/* Voice Carry-Over TTY             */
  VOC_CODEC_TTY_HCO				= VOC_CODEC_DEFAULT+23, 	/* Hearing Carry-Over TTY           */
  VOC_CODEC_USB					= VOC_CODEC_DEFAULT+24, 	/* USB off-board codec              */
  VOC_CODEC_STEREO_USB				= VOC_CODEC_DEFAULT+25, 	/* Stereo USB off-board codec       */
  VOC_CODEC_ON_CHIP_0_DUAL_MIC			= VOC_CODEC_DEFAULT+26, 	/* On Chip dual mic stereo channels */
  VOC_CODEC_BT_CONFERENCE                       = VOC_CODEC_DEFAULT+27,         /* BT conference */
  VOC_CODEC_SPEAKER_DUAL_MIC                    = VOC_CODEC_DEFAULT+28,         /*  Speaker_phone with ISS         */  
  VOC_CODEC_SPEAKER_AUDIO		= VOC_CODEC_DEFAULT+29,
  VOC_CODEC_HEADSET_SPEAKER     = VOC_CODEC_DEFAULT+30,
  VOC_CODEC_VOICE_RECORDER		= VOC_CODEC_DEFAULT+31,
  VOC_CODEC_FM_RADIO_HEADSET_MEDIA = VOC_CODEC_DEFAULT+32,
  VOC_CODEC_FM_RADIO_HEADSET_MEDIA_MULTI = VOC_CODEC_DEFAULT+33,
  VOC_CODEC_STEREO_HEADSET_AUDIO = VOC_CODEC_DEFAULT+34,
  VOC_CODEC_STEREO_HEADSET_LOOPBACK = VOC_CODEC_DEFAULT+35,
  VOC_CODEC_STEREO_HEADSET_WITHOUT_MIC = VOC_CODEC_DEFAULT+36,
  VOC_CODEC_MAX					= VOC_CODEC_DEFAULT+37,
  VOC_CODEC_NONE				= VOC_CODEC_DEFAULT+38,         /* Place Holder                     */
  VOC_CODEC_32BIT_DUMMY                         = 0x7FFFFFFF
} voc_codec_type;

typedef enum {
  HPH = 0,
  SPK,
} amp_gain_type;

struct msm_snd_set_amp_gain_param {
     voc_codec_type voc_codec;
     amp_gain_type gain_type;
     int32_t value;
     int get_flag;  //get_flag = 0 for set, get_flag = 1 for get
	 int get_param;
};

#define SND_SET_AMP_GAIN _IOWR(SND_IOCTL_MAGIC, 13, struct msm_snd_set_amp_gain_param *)
//LGE_SND_UPDATE_E ]
#endif