-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2013.3
-- Copyright (C) 2013 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity CvtColor_0_32_32_1080_1920_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    p_src_rows_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    p_src_cols_V_read : IN STD_LOGIC_VECTOR (11 downto 0);
    p_src_data_stream_0_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    p_src_data_stream_0_V_empty_n : IN STD_LOGIC;
    p_src_data_stream_0_V_read : OUT STD_LOGIC;
    p_src_data_stream_1_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    p_src_data_stream_1_V_empty_n : IN STD_LOGIC;
    p_src_data_stream_1_V_read : OUT STD_LOGIC;
    p_src_data_stream_2_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    p_src_data_stream_2_V_empty_n : IN STD_LOGIC;
    p_src_data_stream_2_V_read : OUT STD_LOGIC;
    p_dst_data_stream_0_V_din : OUT STD_LOGIC_VECTOR (7 downto 0);
    p_dst_data_stream_0_V_full_n : IN STD_LOGIC;
    p_dst_data_stream_0_V_write : OUT STD_LOGIC;
    p_dst_data_stream_1_V_din : OUT STD_LOGIC_VECTOR (7 downto 0);
    p_dst_data_stream_1_V_full_n : IN STD_LOGIC;
    p_dst_data_stream_1_V_write : OUT STD_LOGIC;
    p_dst_data_stream_2_V_din : OUT STD_LOGIC_VECTOR (7 downto 0);
    p_dst_data_stream_2_V_full_n : IN STD_LOGIC;
    p_dst_data_stream_2_V_write : OUT STD_LOGIC );
end;


architecture behav of CvtColor_0_32_32_1080_1920_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_ST_pp0_stg0_fsm_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_ST_st5_fsm_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv12_0 : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    constant ap_const_lv12_1 : STD_LOGIC_VECTOR (11 downto 0) := "000000000001";
    constant ap_const_lv27_3A5E3 : STD_LOGIC_VECTOR (26 downto 0) := "000000000111010010111100011";
    constant ap_const_lv29_12C8B4 : STD_LOGIC_VECTOR (28 downto 0) := "00000000100101100100010110100";
    constant ap_const_lv28_99168 : STD_LOGIC_VECTOR (27 downto 0) := "0000000010011001000101101000";
    constant ap_const_lv32_15 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010101";
    constant ap_const_lv32_1C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011100";
    constant ap_const_lv32_14 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010100";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0) := "00";
    signal j_reg_148 : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_sig_bdd_56 : BOOLEAN;
    signal i_1_fu_165_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal i_1_reg_300 : STD_LOGIC_VECTOR (11 downto 0);
    signal exitcond_fu_171_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_reg_305 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_reg_ppiten_pp0_it0 : STD_LOGIC := '0';
    signal ap_sig_bdd_89 : BOOLEAN;
    signal ap_reg_ppiten_pp0_it1 : STD_LOGIC := '0';
    signal j_1_fu_176_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal exitcond8_fu_160_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_reg_137 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_9_fu_276_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_s_fu_186_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_1_fu_196_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_2_fu_206_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_s_fu_186_p2 : STD_LOGIC_VECTOR (26 downto 0);
    signal p_Val2_2_fu_206_p2 : STD_LOGIC_VECTOR (27 downto 0);
    signal tmp_cast_fu_212_p1 : STD_LOGIC_VECTOR (27 downto 0);
    signal p_Val2_3_fu_216_p2 : STD_LOGIC_VECTOR (27 downto 0);
    signal p_Val2_1_fu_196_p2 : STD_LOGIC_VECTOR (28 downto 0);
    signal tmp_8_cast_fu_222_p1 : STD_LOGIC_VECTOR (28 downto 0);
    signal p_Val2_4_fu_226_p2 : STD_LOGIC_VECTOR (28 downto 0);
    signal tmp_1_fu_232_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_11_fu_246_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_5_cast_fu_242_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_11_cast_fu_254_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_Val2_6_fu_258_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_12_fu_264_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_13_fu_272_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (1 downto 0);
    signal p_Val2_1_fu_196_p00 : STD_LOGIC_VECTOR (28 downto 0);
    signal p_Val2_2_fu_206_p00 : STD_LOGIC_VECTOR (27 downto 0);
    signal p_Val2_s_fu_186_p00 : STD_LOGIC_VECTOR (26 downto 0);


begin




    -- the current state (ap_CS_fsm) of the state machine. --
    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_st1_fsm_0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    -- ap_done_reg assign process. --
    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_continue)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((ap_ST_st2_fsm_1 = ap_CS_fsm) and not((ap_const_lv1_0 = exitcond8_fu_160_p2)))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it0 assign process. --
    ap_reg_ppiten_pp0_it0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
            else
                if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))) and not((exitcond_fu_171_p2 = ap_const_lv1_0)))) then 
                    ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
                elsif (((ap_ST_st2_fsm_1 = ap_CS_fsm) and (ap_const_lv1_0 = exitcond8_fu_160_p2))) then 
                    ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    -- ap_reg_ppiten_pp0_it1 assign process. --
    ap_reg_ppiten_pp0_it1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
            else
                if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))) and (exitcond_fu_171_p2 = ap_const_lv1_0))) then 
                    ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
                elsif ((((ap_ST_st2_fsm_1 = ap_CS_fsm) and (ap_const_lv1_0 = exitcond8_fu_160_p2)) or ((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))) and not((exitcond_fu_171_p2 = ap_const_lv1_0))))) then 
                    ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    -- i_reg_137 assign process. --
    i_reg_137_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_ST_st5_fsm_3 = ap_CS_fsm)) then 
                i_reg_137 <= i_1_reg_300;
            elsif (((ap_ST_st1_fsm_0 = ap_CS_fsm) and not(ap_sig_bdd_56))) then 
                i_reg_137 <= ap_const_lv12_0;
            end if; 
        end if;
    end process;

    -- j_reg_148 assign process. --
    j_reg_148_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))) and (exitcond_fu_171_p2 = ap_const_lv1_0))) then 
                j_reg_148 <= j_1_fu_176_p2;
            elsif (((ap_ST_st2_fsm_1 = ap_CS_fsm) and (ap_const_lv1_0 = exitcond8_fu_160_p2))) then 
                j_reg_148 <= ap_const_lv12_0;
            end if; 
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))))) then
                exitcond_reg_305 <= exitcond_fu_171_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_ST_st2_fsm_1 = ap_CS_fsm)) then
                i_1_reg_300 <= i_1_fu_165_p2;
            end if;
        end if;
    end process;

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_CS_fsm , ap_sig_bdd_56 , exitcond_fu_171_p2 , ap_reg_ppiten_pp0_it0 , ap_sig_bdd_89 , ap_reg_ppiten_pp0_it1 , exitcond8_fu_160_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not(ap_sig_bdd_56)) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if (not((ap_const_lv1_0 = exitcond8_fu_160_p2))) then
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                else
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_2;
                end if;
            when ap_ST_pp0_stg0_fsm_2 => 
                if (not(((ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))) and not((exitcond_fu_171_p2 = ap_const_lv1_0))))) then
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_2;
                elsif (((ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))) and not((exitcond_fu_171_p2 = ap_const_lv1_0)))) then
                    ap_NS_fsm <= ap_ST_st5_fsm_3;
                else
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_2;
                end if;
            when ap_ST_st5_fsm_3 => 
                ap_NS_fsm <= ap_ST_st2_fsm_1;
            when others =>  
                ap_NS_fsm <= "XX";
        end case;
    end process;

    -- ap_done assign process. --
    ap_done_assign_proc : process(ap_done_reg, ap_CS_fsm, exitcond8_fu_160_p2)
    begin
        if (((ap_const_logic_1 = ap_done_reg) or ((ap_ST_st2_fsm_1 = ap_CS_fsm) and not((ap_const_lv1_0 = exitcond8_fu_160_p2))))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_idle assign process. --
    ap_idle_assign_proc : process(ap_start, ap_CS_fsm)
    begin
        if ((not((ap_const_logic_1 = ap_start)) and (ap_ST_st1_fsm_0 = ap_CS_fsm))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_ready assign process. --
    ap_ready_assign_proc : process(ap_CS_fsm, exitcond8_fu_160_p2)
    begin
        if (((ap_ST_st2_fsm_1 = ap_CS_fsm) and not((ap_const_lv1_0 = exitcond8_fu_160_p2)))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_bdd_56 assign process. --
    ap_sig_bdd_56_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_sig_bdd_56 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    -- ap_sig_bdd_89 assign process. --
    ap_sig_bdd_89_assign_proc : process(p_src_data_stream_0_V_empty_n, p_src_data_stream_1_V_empty_n, p_src_data_stream_2_V_empty_n, p_dst_data_stream_0_V_full_n, p_dst_data_stream_1_V_full_n, p_dst_data_stream_2_V_full_n, exitcond_reg_305)
    begin
                ap_sig_bdd_89 <= (((p_src_data_stream_0_V_empty_n = ap_const_logic_0) and (exitcond_reg_305 = ap_const_lv1_0)) or ((exitcond_reg_305 = ap_const_lv1_0) and (p_src_data_stream_1_V_empty_n = ap_const_logic_0)) or ((exitcond_reg_305 = ap_const_lv1_0) and (p_src_data_stream_2_V_empty_n = ap_const_logic_0)) or ((exitcond_reg_305 = ap_const_lv1_0) and (p_dst_data_stream_0_V_full_n = ap_const_logic_0)) or ((exitcond_reg_305 = ap_const_lv1_0) and (p_dst_data_stream_1_V_full_n = ap_const_logic_0)) or ((exitcond_reg_305 = ap_const_lv1_0) and (p_dst_data_stream_2_V_full_n = ap_const_logic_0)));
    end process;

    exitcond8_fu_160_p2 <= "1" when (i_reg_137 = p_src_rows_V_read) else "0";
    exitcond_fu_171_p2 <= "1" when (j_reg_148 = p_src_cols_V_read) else "0";
    i_1_fu_165_p2 <= std_logic_vector(unsigned(i_reg_137) + unsigned(ap_const_lv12_1));
    j_1_fu_176_p2 <= std_logic_vector(unsigned(j_reg_148) + unsigned(ap_const_lv12_1));
    p_Val2_1_fu_196_p0 <= p_Val2_1_fu_196_p00(8 - 1 downto 0);
    p_Val2_1_fu_196_p00 <= std_logic_vector(resize(unsigned(p_src_data_stream_1_V_dout),29));
    p_Val2_1_fu_196_p2 <= std_logic_vector(resize(unsigned(p_Val2_1_fu_196_p0) * unsigned(ap_const_lv29_12C8B4), 29));
    p_Val2_2_fu_206_p0 <= p_Val2_2_fu_206_p00(8 - 1 downto 0);
    p_Val2_2_fu_206_p00 <= std_logic_vector(resize(unsigned(p_src_data_stream_0_V_dout),28));
    p_Val2_2_fu_206_p2 <= std_logic_vector(resize(unsigned(p_Val2_2_fu_206_p0) * unsigned(ap_const_lv28_99168), 28));
    p_Val2_3_fu_216_p2 <= std_logic_vector(unsigned(p_Val2_2_fu_206_p2) + unsigned(tmp_cast_fu_212_p1));
    p_Val2_4_fu_226_p2 <= std_logic_vector(unsigned(p_Val2_1_fu_196_p2) + unsigned(tmp_8_cast_fu_222_p1));
    p_Val2_5_cast_fu_242_p1 <= std_logic_vector(resize(unsigned(tmp_1_fu_232_p4),9));
    p_Val2_6_fu_258_p2 <= std_logic_vector(unsigned(p_Val2_5_cast_fu_242_p1) + unsigned(tmp_11_cast_fu_254_p1));
    p_Val2_s_fu_186_p0 <= p_Val2_s_fu_186_p00(8 - 1 downto 0);
    p_Val2_s_fu_186_p00 <= std_logic_vector(resize(unsigned(p_src_data_stream_2_V_dout),27));
    p_Val2_s_fu_186_p2 <= std_logic_vector(resize(unsigned(p_Val2_s_fu_186_p0) * unsigned(ap_const_lv27_3A5E3), 27));
    p_dst_data_stream_0_V_din <= tmp_9_fu_276_p3;

    -- p_dst_data_stream_0_V_write assign process. --
    p_dst_data_stream_0_V_write_assign_proc : process(ap_CS_fsm, exitcond_reg_305, ap_sig_bdd_89, ap_reg_ppiten_pp0_it1)
    begin
        if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and (exitcond_reg_305 = ap_const_lv1_0) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))))) then 
            p_dst_data_stream_0_V_write <= ap_const_logic_1;
        else 
            p_dst_data_stream_0_V_write <= ap_const_logic_0;
        end if; 
    end process;

    p_dst_data_stream_1_V_din <= tmp_9_fu_276_p3;

    -- p_dst_data_stream_1_V_write assign process. --
    p_dst_data_stream_1_V_write_assign_proc : process(ap_CS_fsm, exitcond_reg_305, ap_sig_bdd_89, ap_reg_ppiten_pp0_it1)
    begin
        if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and (exitcond_reg_305 = ap_const_lv1_0) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))))) then 
            p_dst_data_stream_1_V_write <= ap_const_logic_1;
        else 
            p_dst_data_stream_1_V_write <= ap_const_logic_0;
        end if; 
    end process;

    p_dst_data_stream_2_V_din <= tmp_9_fu_276_p3;

    -- p_dst_data_stream_2_V_write assign process. --
    p_dst_data_stream_2_V_write_assign_proc : process(ap_CS_fsm, exitcond_reg_305, ap_sig_bdd_89, ap_reg_ppiten_pp0_it1)
    begin
        if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and (exitcond_reg_305 = ap_const_lv1_0) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))))) then 
            p_dst_data_stream_2_V_write <= ap_const_logic_1;
        else 
            p_dst_data_stream_2_V_write <= ap_const_logic_0;
        end if; 
    end process;


    -- p_src_data_stream_0_V_read assign process. --
    p_src_data_stream_0_V_read_assign_proc : process(ap_CS_fsm, exitcond_reg_305, ap_sig_bdd_89, ap_reg_ppiten_pp0_it1)
    begin
        if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and (exitcond_reg_305 = ap_const_lv1_0) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))))) then 
            p_src_data_stream_0_V_read <= ap_const_logic_1;
        else 
            p_src_data_stream_0_V_read <= ap_const_logic_0;
        end if; 
    end process;


    -- p_src_data_stream_1_V_read assign process. --
    p_src_data_stream_1_V_read_assign_proc : process(ap_CS_fsm, exitcond_reg_305, ap_sig_bdd_89, ap_reg_ppiten_pp0_it1)
    begin
        if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and (exitcond_reg_305 = ap_const_lv1_0) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))))) then 
            p_src_data_stream_1_V_read <= ap_const_logic_1;
        else 
            p_src_data_stream_1_V_read <= ap_const_logic_0;
        end if; 
    end process;


    -- p_src_data_stream_2_V_read assign process. --
    p_src_data_stream_2_V_read_assign_proc : process(ap_CS_fsm, exitcond_reg_305, ap_sig_bdd_89, ap_reg_ppiten_pp0_it1)
    begin
        if (((ap_ST_pp0_stg0_fsm_2 = ap_CS_fsm) and (exitcond_reg_305 = ap_const_lv1_0) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and not((ap_sig_bdd_89 and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1))))) then 
            p_src_data_stream_2_V_read <= ap_const_logic_1;
        else 
            p_src_data_stream_2_V_read <= ap_const_logic_0;
        end if; 
    end process;

    tmp_11_cast_fu_254_p1 <= std_logic_vector(resize(unsigned(tmp_11_fu_246_p3),9));
    tmp_11_fu_246_p3 <= p_Val2_4_fu_226_p2(20 downto 20);
    tmp_12_fu_264_p3 <= p_Val2_6_fu_258_p2(8 downto 8);
    tmp_13_fu_272_p1 <= p_Val2_6_fu_258_p2(8 - 1 downto 0);
    tmp_1_fu_232_p4 <= p_Val2_4_fu_226_p2(28 downto 21);
    tmp_8_cast_fu_222_p1 <= std_logic_vector(resize(unsigned(p_Val2_3_fu_216_p2),29));
    tmp_9_fu_276_p3 <= 
        ap_const_lv8_FF when (tmp_12_fu_264_p3(0) = '1') else 
        tmp_13_fu_272_p1;
    tmp_cast_fu_212_p1 <= std_logic_vector(resize(unsigned(p_Val2_s_fu_186_p2),28));
end behav;
