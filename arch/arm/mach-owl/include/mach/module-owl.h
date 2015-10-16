#ifndef CMU_MODULE_ID_H
#define CMU_MODULE_ID_H

enum mod_id {
	MOD_ID_ROOT,
	MOD_ID_GPU3D,
	MOD_ID_SHARESRAM,
	MOD_ID_HDCP2X,
	MOD_ID_VCE,
	MOD_ID_VDE,
	MOD_ID_PCM0,
	MOD_ID_SPDIF,
	MOD_ID_HDMIA,
	MOD_ID_I2SRX,
	MOD_ID_I2STX,
	MOD_ID_GPIO,
	MOD_ID_KEY,
	MOD_ID_LENS,
	MOD_ID_BISP,
	MOD_ID_CSI,
	MOD_ID_DSI,
	MOD_ID_LVDS,
	MOD_ID_LCD1,
	MOD_ID_LCD0,
	MOD_ID_DE,
	MOD_ID_SD2,
	MOD_ID_SD1,
	MOD_ID_SD0,
	MOD_ID_NANDC,
	MOD_ID_DDRCH0,
	MOD_ID_NOR,
	MOD_ID_DMAC,
	MOD_ID_DDRCH1,
	MOD_ID_I2C3,
	MOD_ID_I2C2,
	MOD_ID_TIMER,
	MOD_ID_PWM5,
	MOD_ID_PWM4,
	MOD_ID_PWM3,
	MOD_ID_PWM2,
	MOD_ID_PWM1,
	MOD_ID_PWM0,
	MOD_ID_ETHERNET,
	MOD_ID_UART5,
	MOD_ID_UART4,
	MOD_ID_UART3,
	MOD_ID_UART6,
	MOD_ID_PCM1,
	MOD_ID_I2C1,
	MOD_ID_I2C0,
	MOD_ID_SPI3,
	MOD_ID_SPI2,
	MOD_ID_SPI1,
	MOD_ID_SPI0,
	MOD_ID_IRC,
	MOD_ID_UART2,
	MOD_ID_UART1,
	MOD_ID_UART0,
	MOD_ID_HDMI,
	MOD_ID_SS,
	MOD_ID_TV24M,
	MOD_ID_CVBS_CLK108M,
	MOD_ID_TVOUT,
	MOD_ID_MAX_IN_CLK,

	MOD_ID_PERIPHRESET = MOD_ID_MAX_IN_CLK,
	MOD_ID_NIC301,
	MOD_ID_AUDIO,
	MOD_ID_LCD,
	MOD_ID_DDR,
	MOD_ID_NORIF,
	MOD_ID_DBG3RESET,
	MOD_ID_DBG2RESET,
	MOD_ID_DBG1RESET,
	MOD_ID_DBG0RESET,
	MOD_ID_WD3RESET,
	MOD_ID_WD2RESET,
	MOD_ID_WD1RESET,
	MOD_ID_WD0RESET,
	MOD_ID_CHIPID,
	MOD_ID_USB3,
	MOD_ID_HDCP2Tx,
	MOD_ID_USB2_0,
	MOD_ID_USB2_1,
	MOD_ID_MAX
};

#define MODULE_CLK_GPU3D         MOD_ID_GPU3D
#define MODULE_CLK_SHARESRAM     MOD_ID_SHARESRAM
#define MODULE_CLK_HDCP2X        MOD_ID_HDCP2X
#define MODULE_CLK_VCE           MOD_ID_VCE
#define MODULE_CLK_VDE           MOD_ID_VDE
#define MODULE_CLK_PCM0          MOD_ID_PCM0
#define MODULE_CLK_SPDIF         MOD_ID_SPDIF
#define MODULE_CLK_HDMIA         MOD_ID_HDMIA
#define MODULE_CLK_I2SRX         MOD_ID_I2SRX
#define MODULE_CLK_I2STX         MOD_ID_I2STX
#define MODULE_CLK_GPIO          MOD_ID_GPIO
#define MODULE_CLK_KEY           MOD_ID_KEY
#define MODULE_CLK_LENS          MOD_ID_LENS
#define MODULE_CLK_BISP          MOD_ID_BISP
#define MODULE_CLK_CSI           MOD_ID_CSI
#define MODULE_CLK_DSI           MOD_ID_DSI
#define MODULE_CLK_LVDS          MOD_ID_LVDS
#define MODULE_CLK_LCD1          MOD_ID_LCD1
#define MODULE_CLK_LCD0          MOD_ID_LCD0
#define MODULE_CLK_DE            MOD_ID_DE
#define MODULE_CLK_SD2           MOD_ID_SD2
#define MODULE_CLK_SD1           MOD_ID_SD1
#define MODULE_CLK_SD0           MOD_ID_SD0
#define MODULE_CLK_NANDC         MOD_ID_NANDC
#define MODULE_CLK_DDRCH0        MOD_ID_DDRCH0
#define MODULE_CLK_NOR           MOD_ID_NOR
#define MODULE_CLK_DMAC          MOD_ID_DMAC
#define MODULE_CLK_DDRCH1        MOD_ID_DDRCH1
#define MODULE_CLK_I2C3          MOD_ID_I2C3
#define MODULE_CLK_I2C2          MOD_ID_I2C2
#define MODULE_CLK_TIMER         MOD_ID_TIMER
#define MODULE_CLK_PWM5          MOD_ID_PWM5
#define MODULE_CLK_PWM4          MOD_ID_PWM4
#define MODULE_CLK_PWM3          MOD_ID_PWM3
#define MODULE_CLK_PWM2          MOD_ID_PWM2
#define MODULE_CLK_PWM1          MOD_ID_PWM1
#define MODULE_CLK_PWM0          MOD_ID_PWM0
#define MODULE_CLK_ETHERNET      MOD_ID_ETHERNET
#define MODULE_CLK_UART5         MOD_ID_UART5
#define MODULE_CLK_UART4         MOD_ID_UART4
#define MODULE_CLK_UART3         MOD_ID_UART3
#define MODULE_CLK_UART6         MOD_ID_UART6
#define MODULE_CLK_PCM1          MOD_ID_PCM1
#define MODULE_CLK_I2C1          MOD_ID_I2C1
#define MODULE_CLK_I2C0          MOD_ID_I2C0
#define MODULE_CLK_SPI3          MOD_ID_SPI3
#define MODULE_CLK_SPI2          MOD_ID_SPI2
#define MODULE_CLK_SPI1          MOD_ID_SPI1
#define MODULE_CLK_SPI0          MOD_ID_SPI0
#define MODULE_CLK_IRC           MOD_ID_IRC
#define MODULE_CLK_UART2         MOD_ID_UART2
#define MODULE_CLK_UART1         MOD_ID_UART1
#define MODULE_CLK_UART0         MOD_ID_UART0
#define MODULE_CLK_HDMI          MOD_ID_HDMI
#define MODULE_CLK_SS            MOD_ID_SS
#define MODULE_CLK_TV24M         MOD_ID_TV24M
#define MODULE_CLK_TVOUT         MOD_ID_TVOUT
#define MODULE_CLK_CVBS_CLK108M  MOD_ID_CVBS_CLK108M

#define MODULE_RST_PERIPHRESET   MOD_ID_PERIPHRESET
#define MODULE_RST_LENS          MOD_ID_LENS
#define MODULE_RST_NIC301        MOD_ID_NIC301
#define MODULE_RST_GPU3D         MOD_ID_GPU3D
#define MODULE_RST_VCE           MOD_ID_VCE
#define MODULE_RST_VDE           MOD_ID_VDE
#define MODULE_RST_PCM0          MOD_ID_PCM0
#define MODULE_RST_AUDIO         MOD_ID_AUDIO
#define MODULE_RST_GPIO          MOD_ID_GPIO
#define MODULE_RST_KEY           MOD_ID_KEY
#define MODULE_RST_BISP          MOD_ID_BISP
#define MODULE_RST_CSI           MOD_ID_CSI
#define MODULE_RST_DSI           MOD_ID_DSI
#define MODULE_RST_SD2           MOD_ID_SD2
#define MODULE_RST_LCD           MOD_ID_LCD
#define MODULE_RST_DE            MOD_ID_DE
#define MODULE_RST_PCM11         MOD_ID_PCM11
#define MODULE_RST_SD1           MOD_ID_SD1
#define MODULE_RST_SD0           MOD_ID_SD0
#define MODULE_RST_NANDC         MOD_ID_NANDC
#define MODULE_RST_DDR           MOD_ID_DDR
#define MODULE_RST_NORIF         MOD_ID_NORIF
#define MODULE_RST_DMAC          MOD_ID_DMAC
#define MODULE_RST_DBG3RESET     MOD_ID_DBG3RESET
#define MODULE_RST_DBG2RESET     MOD_ID_DBG2RESET
#define MODULE_RST_DBG1RESET     MOD_ID_DBG1RESET
#define MODULE_RST_DBG0RESET     MOD_ID_DBG0RESET
#define MODULE_RST_WD3RESET      MOD_ID_WD3RESET
#define MODULE_RST_WD2RESET      MOD_ID_WD2RESET
#define MODULE_RST_WD1RESET      MOD_ID_WD1RESET
#define MODULE_RST_WD0RESET      MOD_ID_WD0RESET
#define MODULE_RST_CHIPID        MOD_ID_CHIPID
#define MODULE_RST_ETHERNET      MOD_ID_ETHERNET
#define MODULE_RST_I2C3          MOD_ID_I2C3
#define MODULE_RST_I2C2          MOD_ID_I2C2
#define MODULE_RST_UART5         MOD_ID_UART5
#define MODULE_RST_UART4         MOD_ID_UART4
#define MODULE_RST_UART3         MOD_ID_UART3
#define MODULE_RST_USB3          MOD_ID_USB3
#define MODULE_RST_I2C1          MOD_ID_I2C1
#define MODULE_RST_I2C0          MOD_ID_I2C0
#define MODULE_RST_SPI3          MOD_ID_SPI3
#define MODULE_RST_SPI2          MOD_ID_SPI2
#define MODULE_RST_SPI1          MOD_ID_SPI1
#define MODULE_RST_SPI0          MOD_ID_SPI0
#define MODULE_RST_UART2         MOD_ID_UART2
#define MODULE_RST_UART1         MOD_ID_UART1
#define MODULE_RST_UART0         MOD_ID_UART0
#define MODULE_RST_UART6         MOD_ID_UART6
#define MODULE_RST_HDCP2Tx       MOD_ID_HDCP2Tx
#define MODULE_RST_HDMI          MOD_ID_HDMI
#define MODULE_RST_TVOUT         MOD_ID_TVOUT
#define MODULE_RST_USB2          MOD_ID_USB2

int module_clk_enable(int mod_id);
int module_clk_disable(int mod_id);
int module_reset(int mod_id);
int owl_module_reset_assert(int mod_id);
int owl_module_reset_deassert(int mod_id);

#endif
